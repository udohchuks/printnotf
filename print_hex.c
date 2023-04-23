#include "main.h"
/**
 * print_hex - print in base 16 in small letters
 * @arg: va_list arg
 * Return: size of str
 */
int print_hex(va_list arg)
{
	int size;
	char *str;
	int base =  16;
	char buffer[BUFFER];

	str = itoa(va_arg(arg, unsigned long int), buffer, base);
	size = print_str(str);
	return (size);
}
