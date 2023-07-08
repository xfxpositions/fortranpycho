program main
    implicit none
    interface
      ! Declare the external subroutine for the system call
      subroutine write(message, len) bind(C)
        use, intrinsic :: iso_c_binding
        character(kind=c_char), dimension(*), intent(in) :: message
        integer(kind=c_int), value :: len
      end subroutine write
    end interface
  
    character(len=12) :: message = "Hello, world"
  
    ! Call the system write subroutine
    call write(message, len(message))
  
end program main
  