#include "main.h"
/**
 * print_string - prints string to stdout
 * @arg: va_list arg
 * Return: size of string
 */
int print_string(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
