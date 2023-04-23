#include "main.h"
/**
 * percentage_handler - handles percentages
 * @arg: va_list
 * @str: format
 * @i: index of %
 * Return: size of va_arg(arg, type)
 */
int percentage_handler(const char *str, va_list arg, int *i)
{
	int num_event = 12;
	format event[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'b', print_bin},
		{'u', print_uint},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'p', print_add},
		{'r', reverse_str},
		{'R', rot13}
	};
	int j = 0, size;

	*i = *i + 1;
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	while (j < num_event)
	{
		if (str[*i] == event[j].type)
		{
			size = event[j].f(arg);
			return (size);
		}
		j++;
	}
	_putchar('%');
	_putchar(str[*i]);
	return (2);
}
