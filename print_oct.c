#include "main.h"
/**
 * print_oct - prints in base 8
 * @arg: va_list arg
 * Return: length of output
 */
int print_oct(va_list arg)
{
	int base = 8;
	char buffer[BUFFER];
	int size;
	char *str;

	str = itoa(va_arg(arg, unsigned long int), buffer, base);
	size = print_str(str);
	return (size);
}
