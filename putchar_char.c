#include "main.h"

/**
 * print_char - prints a character passed as an argument
 * @args: a variable argument list containing an int value
 * Return: (always 1)
*/

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

