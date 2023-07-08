#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>

#define PORT 3001

int main()
{

    char hello_message[] = "Hi there from write system call!\n";
    write(0, hello_message, sizeof(hello_message));
    int socketfd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketfd == -1)
    {
        perror("Soket oluşturulamadı");
        return 1;
    }

    struct sockaddr_in serverAddress, clientAdress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(PORT); // Bağlanacağınız port numarasını belirtin

    int bindResult = bind(socketfd, (struct sockaddr *)&serverAddress, sizeof(serverAddress));
    if (bindResult == -1)
    {
        perror("Bind hatası");
        return 1;
    }

    // listening
    int listenResult = listen(socketfd, 5); // 5, eşzamanlı bağlantı sınırını belirtir
    if (listenResult == -1)
    {
        perror("Dinleme hatası");
        return 1;
    }
    printf("Bind ve dinleme işlemi başarılı\n");
    while (1)
    {
        socklen_t clientAdressSize = sizeof(clientAdress);

        // accept
        int acc = accept(socketfd, (struct sockaddr *)&clientAdress, &clientAdressSize);
        if (acc == -1)
        {
            perror("Error on accepting");
            return 1;
        }
        else
        {
            printf("something came, wow\n");
        }
        char message[] = "ismin ne?\n";
        // read
        int once_disconnected = 0;
        char buffer[1024];
        ssize_t read_result;
        read_result = read(acc, buffer, 1024);
        if (read_result == -1)
        {
            perror("read error");
            return 1;
        }
        else if (read_result == 0 && once_disconnected)
        {
            printf("disconnect by peer\n");
            once_disconnected = 1;
        }
        else
        {
            once_disconnected = 0;
            printf("buffer is %s", buffer);
            const char response_text[] = "HTTP/1.1 200 OK\r\n\r\nHello, World!\n";
            write(acc, response_text, sizeof(response_text));
            printf("buffer writed\n");
        }
        close(acc);
    }

    close(socketfd);
    return 0;
}
