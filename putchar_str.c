#include "main.h"

/**
 * print_str - prints a string passed as an arg
 * @args: a variable argument list with  a string pointer
 * Return: the number of characters printed
*/

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count;

	count = 0;
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
