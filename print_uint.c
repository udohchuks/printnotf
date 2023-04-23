#include "main.h"
/**
 * print_uint - prints integer to stdout
 * @arg: va_list arg
 * Return: size of va_args
 */
int print_uint(va_list arg)
{
	int base =  10, size;
	char buffer[BUFFER];
	char *str;

	_memset(buffer, 1024);
	str = itoa(va_arg(arg, unsigned int), buffer, base);
	size = print_str(str);
	return (size);
}

