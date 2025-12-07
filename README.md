# ft_printf
A custom re-implementation of the standard `printf` function, supporting formatted output with variable arguments.  
This project is part of M01 and focuses on understanding variadic functions, recursion, formatting logic, and clean output handling.

## Features
`ft_printf` supports the following conversions:

| Specifier | Output |
|----------|--------|
| `%c` | Single character |
| `%s` | String (`(null)` if pointer is NULL) |
| `%d` / `%i` | Signed integer |
| `%u` | Unsigned integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%p` | Pointer address (`0x` prefix, `(nil)` if null) |
| `%%` | Literal `%` |

## How It Works
- Uses `va_list` to handle an arbitrary number of arguments.
- Each format specifier is routed through `ft_argument_checker`.
- Numbers are printed using recursive conversion functions:
  - `ft_putnbr` for signed integers  
  - `ft_putnbr_unsigned` for unsigned  
  - `ft_putnbr_hex` for hex output
- Pointer formatting is handled separately with prefixing and null handling.

## Example Usage
```
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", main);

    return 0;
}
```
## Building
Compile the library using the provided Makefile:
```
make
```
and this gives you:
```
libft_printf.a
```
and then you can use it on other projects! (pls dont)
```
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```
