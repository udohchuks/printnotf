#include "main.h"
/**
 * str_len - length of string
 * @str: string
 * Return: length of string
 */
int str_len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
