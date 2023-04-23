#include "main.h"
/**
 * print_str - prints string to stdout
 * @str: string
 * Return: size of string
 */
int print_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
