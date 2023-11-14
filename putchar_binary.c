#include "main.h"

/**
 * print_binary - prints unsigned int as binary
 * @args: list of arguments
 *
 * Return: number of characters printed
*/

int print_binary(va_list args)
{
	unsigned int i;
	int count;

	i = va_arg(args, unsigned int);
	count = 0;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	count += print_binary_recursive(i);
	return (count);
}

/**
 * print_binary_recursive - prints binary representation of a number
 * @i: unsigned int to be printed
 *
 * Return: the number of characters
*/

int print_binary_recursive(unsigned int i)
{
	int count;

	count = 0;
	if (i == 0)
		return (0);

	count += print_binary_recursive(i / 2);
	_putchar('0' + i % 2);

	return (count + 1);
}