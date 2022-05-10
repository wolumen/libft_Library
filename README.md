# Libft

## Description

This project is all about recoding a set of the **libc** functions and some other very useful functions to create our own library.  
The goal is to gain a deeper understanding of C programming and to get familiar with dynamic memory usage, pointers and their applications, as well as different string manipulation technics. The Bonus covers single linked lists and function pointers.   
All code has to compile with -Wall -Werror -Wextra and to be free of memory possible leaks.

### Allowed functions

 - write
 - malloc
 - free

## List of Functions

- ### Part 1 - Libc

  ```
  atoi, calloc, isalnum, isalpha, isascii, isdigit, isprint,
  memchr, memcmp, memcpy, memmove, memset, bzero,
  strchr, strrchr,strdup, strlcat, strlcpy, strlen, strncmp, strnstr, 
  tolower, toupper
  ```

- ### Part 2 - Additional

  ```
  substr, strjoin, strtrim, split, itoa, strmapi, striteri,
  putchar_fd, putstr_fd, putendl_fd, putnbr_fd
  ```

- ### Bonus

  ```
  lstnew, lstadd_front, lstsize, lstlast,
  lstadd_back, lstdelone, lstclear, lstiter, lstmap
  ```
To be able to distinguish the self-written functions, they have been prefixed with ft.


## Objectives

* C Basics
* Libc
* Static library generation


## Skills

* Rigor
* Algorithms & AI
* Imperative programming


## Getting Started

### Clone the repository
```shell
git clone git@github.com:wolumen/libft_Library.git
cd libft_Library
```

### Compiling
Run the following commands:

* To compile the libft.a file
		
		make
* To compile with the bonus files
		
		make bonus
* To remove objects:

		make clean
* To remove objects and binary file:

        make fclean
* To re-compile:

		make re



