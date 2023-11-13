#include "main.h"

/**
 * print_percent - print %
 * @args: a variable argument list
 *
 * Return: 1
*/

int print_percent(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
