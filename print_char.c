#include "main.h"
/**
 * print_char - prints character
 * @arg: va_list arg
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
