#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_unsigned - print unsigned number
 * @args: list of arguments
 *
 * Return: number of ints printed
*/

int print_unsigned(va_list args)
{
	unsigned int num;
	int count;

	count = 0;
	num = va_arg(args, unsigned int);
	count += put_int(num);
	return (count);
}
