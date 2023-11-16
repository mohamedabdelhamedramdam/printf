#include "main.h"
#include <limits.h>

/**
 * put_int - prints integer
 * @i: integer
 *
 * Return: number of characters
*/
int put_int(int i)
{
	int count;
	int divisor;
	int int_min_active, int_min_last_digit;

	int_min_active = 0;
	int_min_last_digit = 0;
	count = 0;
	divisor = 1;

	if (i == INT_MIN)
	{
		int_min_active = 1;
		int_min_last_digit = -(i % 10);
		i /= 10;
	}
	if (i < 0)
	{
		count += _putchar('-');
		i = -i;
	}
	while (i / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		count += _putchar('0' + i / divisor);
		i %= divisor;
		divisor /= 10;
	}
	if (int_min_active)
		count += _putchar('0' + int_min_last_digit);

	return (count);
}
