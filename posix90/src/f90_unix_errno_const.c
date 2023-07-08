/*
  f90_unix_errno_const.c : determine values for f90_unix_errno
  
   This file is part of Posix90

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA. 

*/

#include <stdio.h>
#include <errno.h>

main(){

    printf("! DO NOT EDIT THIS FILE. \n");
    printf("! It is created from f90_unix_env_const.c\n");
    printf("integer, parameter :: E2BIG= %d\n", E2BIG);
    printf("integer, parameter :: EACCES = %d\n", EACCES);
    printf("integer, parameter :: EAGAIN = %d\n", EAGAIN);
    printf("integer, parameter :: EBADF = %d\n", EBADF);
    printf("integer, parameter :: EBUSY = %d\n", EBUSY);
    printf("integer, parameter :: ECHILD = %d\n", ECHILD);
    printf("integer, parameter :: EDEADLK = %d\n", EDEADLK);
    printf("integer, parameter :: EDOM = %d\n", EDOM);
    printf("integer, parameter :: EEXIST = %d\n", EEXIST);
    printf("integer, parameter :: EFAULT = %d\n", EFAULT);
    printf("integer, parameter :: EFBIG = %d\n", EFBIG);
    printf("integer, parameter :: EINTR = %d\n", EINTR); 
    printf("integer, parameter :: EINVAL = %d\n", EINVAL); 
    printf("integer, parameter :: EIO = %d\n", EIO); 
    printf("integer, parameter :: EISDIR = %d\n", EISDIR); 
    printf("integer, parameter :: EMFILE = %d\n", EMFILE); 
    printf("integer, parameter :: EMLINK = %d\n", EMLINK); 
    printf("integer, parameter :: ENAMETOOLONG = %d\n", ENAMETOOLONG); 
    printf("integer, parameter :: ENFILE = %d\n", ENFILE); 
    printf("integer, parameter :: ENODEV = %d\n", ENODEV); 
    printf("integer, parameter :: ENOENT = %d\n", ENOENT); 
    printf("integer, parameter :: ENOEXEC = %d\n", ENOEXEC); 
    printf("integer, parameter :: ENOLCK = %d\n", ENOLCK); 
    printf("integer, parameter :: ENOMEM = %d\n", ENOMEM); 
    printf("integer, parameter :: ENOSPC = %d\n", ENOSPC); 
    printf("integer, parameter :: ENOSYS = %d\n", ENOSYS); 
    printf("integer, parameter :: ENOTDIR = %d\n", ENOTDIR); 
    printf("integer, parameter :: ENOTEMPTY = %d\n", ENOTEMPTY); 
    printf("integer, parameter :: ENOTTY = %d\n", ENOTTY); 
    printf("integer, parameter :: ENXIO = %d\n", ENXIO); 
    printf("integer, parameter :: EPERM = %d\n", EPERM); 
    printf("integer, parameter :: EPIPE = %d\n", EPIPE); 
    printf("integer, parameter :: ERANGE = %d\n", ERANGE); 
    printf("integer, parameter :: EROFS = %d\n", EROFS); 
    printf("integer, parameter :: ESPIPE = %d\n", ESPIPE); 
    printf("integer, parameter :: ESRCH = %d\n", ESRCH); 
    printf("integer, parameter :: EXDEV = %d\n", EXDEV);
    return 0;
}