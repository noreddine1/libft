# Libft

Libft is a custom implementation of the standard C library functions, created as part of the 42 school curriculum. It provides a collection of commonly used functions for string manipulation, memory management, and linked list operations, among others.

## Features

- **String Manipulation**: Functions like `ft_strlen`, `ft_strjoin`, `ft_strtrim`, and more.
- **Memory Management**: Functions like `ft_memset`, `ft_memcpy`, `ft_calloc`, etc.
- **Character Checks**: Functions like `ft_isalpha`, `ft_isdigit`, `ft_isprint`, etc.
- **Linked List Operations**: Functions like `ft_lstnew`, `ft_lstadd_back`, `ft_lstiter`, and more.

## Files

The project is organized into multiple `.c` files, each implementing a specific function. The header file `libft.h` contains all the function prototypes and necessary includes.

### Key Files

- **Mandatory Functions**: Implementations of standard C library functions like `ft_atoi`, `ft_strdup`, `ft_strncmp`, etc.
- **Bonus Functions**: Additional linked list functions like `ft_lstadd_front`, `ft_lstclear`, `ft_lstmap`, etc.

## Compilation

The project includes a `Makefile` to simplify the compilation process. Use the following commands:

- `make`: Compiles the library and creates `libft.a`.
- `make bonus`: Compiles the bonus functions and adds them to `libft.a`.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Cleans and recompiles the library.

## Usage

1. Include `libft.h` in your project.
2. Compile your project with `libft.a` by linking it during compilation:
```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```
License
This project is part of the 42 school curriculum and is intended for educational purposes. 