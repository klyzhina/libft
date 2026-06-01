*This project has been created as part of the 42 curriculum by kselyzhi.*

# libft

## Description

`libft` is the first project of the 42 curriculum. I recreated a set of standard C library functions and added some extra utilities, all packaged as a static library (`libft.a`) to reuse in future C projects.

The library is split in three parts:

### Part 1 — Libc functions
Reimplementations of standard libc functions:

- `ft_isalpha` — checks if a character is alphabetic.
- `ft_isdigit` — checks if a character is a digit (0–9).
- `ft_isalnum` — checks if a character is alphanumeric.
- `ft_isascii` — checks if a character is a valid ASCII value (0–127).
- `ft_isprint` — checks if a character is printable.
- `ft_strlen` — returns the length of a null-terminated string.
- `ft_memset` — fills a memory block with a constant byte.
- `ft_bzero` — sets a memory block to zero.
- `ft_memcpy` — copies bytes from one memory area to another.
- `ft_memmove` — copies bytes safely, even if the areas overlap.
- `ft_strlcpy` — copies a string with a size limit, always null-terminating.
- `ft_strlcat` — concatenates strings with a size limit, always null-terminating.
- `ft_toupper` — converts a lowercase letter to uppercase.
- `ft_tolower` — converts an uppercase letter to lowercase.
- `ft_strchr` — finds the first occurrence of a character in a string.
- `ft_strrchr` — finds the last occurrence of a character in a string.
- `ft_strncmp` — compares two strings up to `n` characters.
- `ft_memchr` — searches for a byte in a memory block.
- `ft_memcmp` — compares two memory blocks byte by byte.
- `ft_strnstr` — finds a substring inside a string, limited by length.
- `ft_atoi` — converts a string to an integer.
- `ft_calloc` — allocates zero-initialized memory.
- `ft_strdup` — allocates and returns a duplicate of a string.

### Part 2 — Additional functions
Utility functions not present in libc:

- `ft_substr` — extracts a substring from a string starting at a given index.
- `ft_strjoin` — concatenates two strings into a newly allocated one.
- `ft_strtrim` — removes a set of characters from the start and end of a string.
- `ft_split` — splits a string by a delimiter into a NULL-terminated array.
- `ft_itoa` — converts an integer to its string representation.
- `ft_strmapi` — builds a new string by applying a function to each character.
- `ft_striteri` — applies a function to each character of a string by address.
- `ft_putchar_fd` — writes a character to a given file descriptor.
- `ft_putstr_fd` — writes a string to a given file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` — writes an integer to a given file descriptor.

### Part 3 — Linked list
A set of functions to manipulate `t_list` nodes (singly linked list):

- `ft_lstnew` — creates a new node holding the given content.
- `ft_lstadd_front` — adds a node at the beginning of the list.
- `ft_lstsize` — counts the number of nodes in the list.
- `ft_lstlast` — returns the last node of the list.
- `ft_lstadd_back` — adds a node at the end of the list.
- `ft_lstdelone` — frees a single node's content and the node itself.
- `ft_lstclear` — deletes and frees the whole list.
- `ft_lstiter` — applies a function to the content of every node.
- `ft_lstmap` — builds a new list by applying a function to each node's content.


## Instructions

- Requires `cc` and `make` on a Unix-like environment (Linux / macOS).
- All `.c` files are compiled with `-Wall -Wextra -Werror`.
- Building: `make` produces `libft.a`.
- Cleaning: `make clean` removes object files, `make fclean` also removes `libft.a`, and `make re` rebuilds everything from scratch.
- The header is included with `#include "libft.h"`, and the archive is linked with `-L. -lft` when compiling another project.

## Resources

- The official `libft` subject PDF.
- `man` pages of every reimplemented function (`man strlcpy`,`man atoi`, `man calloc`, ...).
- 42 Norm specification.
- General C references used throughout the project: [W3Schools — C Tutorial](https://www.w3schools.com/c/index.php)

### AI Use

AI was used to understand C concepts, but not to write code. All functions were implemented by me.