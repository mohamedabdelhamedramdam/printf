#ifndef _PRINTF
#define _PRINTF

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format,...);

typedef struct format_options
{
  int abb;
  int (*f)(va_list args);
} f_o;

int (*get_format_func(char dir))(va_list args);

int print_char(va_list args);
int print_int(va_list args);
int print_str(va_list args);
int print_percent();

#endif /* _PRINTF */
