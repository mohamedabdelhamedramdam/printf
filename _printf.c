#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: character string composed of 0 or more directives
 *
 * Return: the number of characters printed (excluding the null
 * byte used to end output to strings) and it writes output to stdout
*/

int _printf(const char *format, ...)
{
	int i;
	va_list ap;
	int (*get_format)(va_list args);
	char directive;
	int count;

	if (format == NULL)
	{
		return (-1);
	}
	count = 0;
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			directive = format[++i];
			get_format = get_format_func(directive);
			if (get_format != NULL)
				count += get_format(ap);
			else
				{
					count += _putchar('%');
					count += _putchar(directive);
				}
		}
	}

	return (count);
}
