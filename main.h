#ifndef _PRINTF
#define _PRINTF

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct format_options - format options for the format string
 * @abb: integer to search for
 * @f: corresponding functions
*/

typedef struct format_options
{
int abb;
int (*f)(va_list args);
} f_o;

int (*get_format_func(char dir))(va_list args);

int print_char(va_list args);
int print_int(va_list args);
int print_str(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_unsigned_octal(va_list args);

int put_int(int i);
int print_binary_recursive(unsigned int i);
int print_octal_recursive(int num, int count);

#endif /* _PRINTF */
