<div align="center">
  <a href="https://github.com/mpeyre-s/ft_printf">
    <img src="https://github.com/mpeyre-s/42_project_badges/raw/main/badges/ft_printf_bonus.svg" alt="ft_printf badge" />
  </a>
</div>



## Overview

**ft_printf** is a custom implementation of the standard C `printf` function.  
It handles formatted output with a subset of the original functionality, fully written from scratch in C without using the standard `printf` function or its variants.

The goal of this project is to better understand variadic functions, string formatting, memory handling, and low-level output operations.

## Supported Conversions

`ft_printf` supports the following conversion specifiers:

| Specifier | Description                      |
|-----------|----------------------------------|
| `%c`      | Print a single character         |
| `%s`      | Print a string                   |
| `%p`      | Print a pointer address          |
| `%d`      | Print a signed decimal integer   |
| `%i`      | Same as `%d`                     |
| `%u`      | Print an unsigned decimal number |
| `%x`      | Print a lowercase hex number     |
| `%X`      | Print an uppercase hex number    |
| `%%`      | Print a percent sign             |



