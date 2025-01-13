# ft_printf

`ft_printf` is a project from the 42 Network curriculum that challenges students to reimplement the standard C library's `printf` function. This custom implementation replicates much of the functionality of `printf`, with a focus on handling formatted output and variadic arguments.

---

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Installation](#installation)
- [Implementation Details](#implementation-details)
- [Learning Outcomes](#learning-outcomes)
- [Credits](#credits)

---

## Introduction
The `ft_printf` project is a fundamental exercise in C programming, aimed at:
- Understanding variadic functions through `stdarg.h`.
- Gaining experience with formatted string handling.
- Building a deeper understanding of memory management and performance optimization.

The project requires adhering to strict coding standards, which ensures high-quality, maintainable code.

---

## Features

`ft_printf` supports the following conversion specifiers:

| Specifier | Description                       |
|-----------|-----------------------------------|
| `%c`      | Prints a single character         |
| `%s`      | Prints a null-terminated string   |
| `%p`      | Prints a pointer address          |
| `%d`/`%i` | Prints a signed integer           |
| `%u`      | Prints an unsigned integer        |
| `%x`/`%X` | Prints a number in hexadecimal    |
| `%%`      | Prints a literal `%` character    |

Additional functionality:
- Handles width, precision, and flags like `-` and `0` for formatting.
- Supports variable-length arguments using `stdarg.h`.

---

## Usage

### Example:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You are %d years old.\n", "World", 42);
    return 0;
}
```

### Output:
```
Hello, World! You are 42 years old.
```

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ft_printf.git
   cd ft_printf
   ```

2. Compile the library:
   ```bash
   make
   ```

3. Include `ft_printf.h` and link the library when compiling your project:
   ```bash
   gcc -o main main.c libftprintf.a
   ```

---

## Implementation Details

### Key Concepts:
- **Variadic Functions:**
  Leveraged `stdarg.h` to manage an unknown number of arguments dynamically.

- **Formatting and Parsing:**
  Built a parser to interpret format strings and handle flags, width, and precision.

- **Memory Management:**
  Carefully managed memory allocation for formatted strings to avoid leaks.

---

## Learning Outcomes

Through this project, I:
- Gained proficiency with variadic functions and the `stdarg.h` library.
- Strengthened understanding of C string manipulation.
- Improved debugging skills and adherence to strict coding standards.

---

## Credits

Project completed as part of the 42 Network curriculum.

---

