#include "main.h"

/**
 * print_int - prints an integer passed as an argument
 * @args: a variable argument list containing an int value
 * Return: the number of characters printed
*/

int print_int(va_list args)
{
	int num;
	int count;
	int divisor;

	num = va_arg(args, int);
	count = 0;
	divisor = 1;
	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		count += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
