*This project has been created as part of the 42 curriculum by ajoundi.*



## Description
Libft is the very first project in the 42 curriculum. Its purpose is to create a custom C library (`libft.a`) containing reimplementations of standard C library functions (libc), additional utility functions, and functions for manipulating singly-linked lists. This library serves as a reusable foundation for future C projects at 42.

The library contains:
- **Libc functions:** Standard functions for memory manipulation (`memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `bzero`), character testing and conversion (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`), string analysis (`strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`), string copy/concatenation (`strlcpy`, `strlcat`), string duplication (`strdup`), integer conversion (`atoi`), and dynamic memory allocation (`calloc`).

- **Additional functions:** String and memory utilities not in standard libc or implemented differently, such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and file descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).

- **Linked list functions:** Functions to create and manipulate singly-linked lists (`t_list` structure), including `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

### Compilation
To compile the library, run:
```bash
make
```
This generates the archive file `libft.a` at the root of the repository.

Available Makefile rules:
- `make` or `make all`: Compiles all source files and creates `libft.a`.
- `make clean`: Removes all compiled object files (`.o`).
- `make fclean`: Removes all compiled object files and `libft.a`.
- `make re`: Performs a complete rebuild (`fclean` followed by `all`).


### Usage
To use `libft.a` in your C projects:
1. Include the header in your C source files:
   ```c
   #include "libft.h"
   ```
2. Compile your program by linking `libft.a`:
   ```bash
   cc main.c -L. -lft -o my_program
   ```

## Resources

- **Documentation & References:**
  - Linux man pages for standard C library functions, including `malloc`, `memset`, `strlen`, and other functions used in the project.
  - OpenBSD man pages for `strlcpy` and `strlcat`, used as references for string manipulation functions.

- **Use of AI:**
  - AI assistance was used to help debug `libftTester` test outputs, particularly to identify uninitialized memory reads in `ft_itoa` and to improve the configuration of the Makefile build rules.
