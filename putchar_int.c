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

	num = va_arg(args, int);
	count = 0;

	count += put_int(num);
	return (count);
}