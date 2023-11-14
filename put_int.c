#include "main.h"

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

	count = 0;
	divisor = 1;
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

	return (count);
}
