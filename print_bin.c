#include "main.h"
/**
 * print_bin - prints number in binary
 * @arg: number
 * Return: lenght of number
 */
int print_bin(va_list arg)
{
	int size;
	char buffer[BUFFER];
	int base = 2;
	char *str = itoa(va_arg(arg, int), buffer, base);

	size = print_str(str);
	return (size);
}
