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
	int i, count;
	va_list ap;
	int (*get_format)(va_list args);

	if (format == NULL)
	{
		return (-1);
	}
	count = 0;
	va_start(ap, format);
	if (format == NULL || (format[0] == '%' &&
		(!format[1] || (format[1] == ' ' && !format[2]))))
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[++i] == '%')
			{
				count += _putchar('%');
				continue;
			}
			get_format = get_format_func(format[i]);
			if (get_format != NULL)
				count += get_format(ap);
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
	}
	return (count);
}
