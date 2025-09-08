<!-- PROJECT LOGO -->

<br />
<div align="center">
  <img width="200" alt="Image" src="https://github.com/user-attachments/assets/9c663bd9-e74e-492e-b43d-d64c232a5e30" />
  </a>

  <p align="center">
    A custom C standard library for the 42 cursus  
    <br />
  </p>
</div>

<!-- TABLE OF CONTENTS -->

## Contents

* [About the Project](#about-the-project)
* [Implemented Functions](#implemented-functions)
* [Project Structure](#project-structure)
* [Build](#build)
* [Usage](#usage)
* [Example](#example)

## About the Project

With this project I wrote my own C library. It contains the most important functions for characters, strings, memory, and simple lists. I used it as a toolbox and as the foundation for many further projects in the 42 cursus.

## Implemented Functions

### Character Functions

* `ft_isalpha` – checks if character is a letter
* `ft_isdigit` – checks if character is a digit
* `ft_isalnum` – checks if character is a letter or digit
* `ft_isascii` – checks if character is an ASCII character
* `ft_isprint` – checks if character is printable

### String Functions

* `ft_strlen` – length of a string
* `ft_strdup` – duplicates a string
* `ft_strchr` – searches for a character from the start
* `ft_strrchr` – searches for a character from the end
* `ft_strncmp` – compares two strings (n characters)
* `ft_strnstr` – searches for a substring in a string
* `ft_strlcpy` – copies a string (with size limit)
* `ft_strlcat` – appends a string (with size limit)
* `ft_strjoin` – joins two strings
* `ft_strtrim` – removes leading/trailing characters
* `ft_split` – splits a string by a delimiter
* `ft_substr` – returns a substring
* `ft_strmapi` – creates a new string by applying a function to each character
* `ft_striteri` – applies a function to each character in place

### Memory Functions

* `ft_memset` – fills a memory block with a value
* `ft_bzero` – sets a memory block to zero
* `ft_memcpy` – copies a memory block
* `ft_memmove` – like `ft_memcpy`, but safe for overlapping areas
* `ft_memchr` – searches for a byte in memory
* `ft_memcmp` – compares two memory blocks
* `ft_calloc` – allocates memory and sets it to zero

### Conversion Functions

* `ft_atoi` – converts a string to an integer
* `ft_toupper` – converts to uppercase
* `ft_tolower` – converts to lowercase

### Output to File Descriptors

* `ft_putchar_fd` – writes a character to a given fd
* `ft_putstr_fd` – writes a string to a given fd
* `ft_putendl_fd` – writes a string with a newline to a given fd
* `ft_putnbr_fd` – writes a number to a given fd

### Bonus (Lists)

* `ft_lstnew` – creates a new list element
* `ft_lstadd_front` – adds an element to the front
* `ft_lstadd_back` – adds an element to the back
* `ft_lstlast` – returns the last element
* `ft_lstsize` – counts elements in a list
* `ft_lstdelone` – deletes one element
* `ft_lstclear` – deletes the whole list

## Project Structure

```
libft/
├─ *.c                # Function implementations
├─ libft.h            # Header file
└─ Makefile           # Build rules
```

## Build

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

## Usage

1. Build the library:

   ```sh
   make
   ```
2. Link during compilation:

   ```sh
   cc main.c -L. -lft -I . -o myprog
   ```
3. In your code:

   ```c
   #include "libft.h"
   ```

## Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s = "  Hello 42  ";
    char *temp = ft_strtrim(s, " ");
    printf("%s\n", temp);   // Output: "Hello 42"
    free(temp);
    return 0;
}
```
