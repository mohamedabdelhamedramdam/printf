#include "main.h"
#include <string.h>

/**
 * get_format_func - get the proper format function
 * @dir: the directive
 *
 * Return: number of characters printed
*/

int (*get_format_func(char dir))(va_list args)
{
	f_o formats_functions[] = {
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'s', print_str},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_unsigned_octal},
		{0, NULL}
	};
	int i;

	i = 0;
	while (formats_functions[i].abb != 0)
	{
		if (dir == formats_functions[i].abb)
			return (formats_functions[i].f);
		i++;
	}

	return (NULL);
}
