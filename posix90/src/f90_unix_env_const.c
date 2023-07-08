/*
 f90_unix_env_const.c : Determine values of constants for f90_unix_env

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
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

main(){

    printf("! DO NOT EDIT THIS FILE. \n");
    printf("! It is created from f90_unix_env_const.c\n");
    printf("integer, parameter :: CLOCK_KIND = %d\n", sizeof(clock_t));
    printf("integer, parameter :: LONG_KIND = %d\n", sizeof(long));
    printf("integer, parameter :: GID_KIND = %d\n", sizeof(gid_t));
    printf("integer, parameter :: UID_KIND = %d\n", sizeof(uid_t));
    printf("integer, parameter :: PID_KIND = %d\n", sizeof(pid_t));
    printf("integer, parameter :: SIZET_KIND = %d\n", sizeof(size_t));
    printf("integer, parameter :: NULL = %d\n", NULL);
    printf("integer, parameter :: L_CTERMID = %d\n", L_ctermid);

    printf("integer, parameter :: SC_ARG_MAX = %d\n", _SC_ARG_MAX);
    printf("integer, parameter :: SC_CHILD_MAX = %d\n", _SC_CHILD_MAX);
    printf("integer, parameter :: SC_HOST_NAME_MAX = %d\n", _SC_HOST_NAME_MAX);
    printf("integer, parameter :: SC_LOGIN_NAME_MAX = %d\n", _SC_LOGIN_NAME_MAX);
    printf("integer, parameter :: SC_CLK_TCK = %d\n", _SC_CLK_TCK);
    printf("integer, parameter :: SC_OPEN_MAX = %d\n", _SC_OPEN_MAX);
    printf("integer, parameter :: SC_PAGESIZE = %d\n", _SC_PAGESIZE);
    printf("integer, parameter :: SC_RE_DUP_MAX = %d\n", _SC_RE_DUP_MAX);
    printf("integer, parameter :: SC_STREAM_MAX = %d\n", _SC_STREAM_MAX);
    printf("integer, parameter :: SC_SYMLOOP_MAX = %d\n", _SC_SYMLOOP_MAX);
    printf("integer, parameter :: SC_TTY_NAME_MAX = %d\n", _SC_TTY_NAME_MAX);
    printf("integer, parameter :: SC_TZNAME_MAX = %d\n", _SC_TZNAME_MAX);
    printf("integer, parameter :: SC_VERSION = %d\n", _SC_VERSION);
    return 0;
}


