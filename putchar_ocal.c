#include "main.h"

/**
 * print_unsigned_octal - print unsigned octal number
 * @args: list of arguments
 * Return: count of integers printed
 **/

int print_unsigned_octal(va_list args)
{
	int i;

	i = va_arg(args, int);
	if (i < 0)
		i = -i;
	return (print_octal_recursive(i, 0));
}

/**
 * print_octal_recursive - recursive calls to print octal conversions
 * @num: number to convert
 * @count: number of digits
 *
 * Return: count of digits printed
*/

int print_octal_recursive(int num, int count)
{
	if (num == 0)
		return (count);

	count = print_octal_recursive(num / 8, count);
	count += _putchar('0' + num % 8);

	return (count);
}
