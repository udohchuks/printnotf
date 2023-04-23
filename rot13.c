#include "main.h"
/**
 * rot13 - rot13 encoding
 * @arg: string
 * Return: string
 */
int  rot13(va_list arg)
{
	char let1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, size;
	char *str = va_arg(arg, char *);
	char *string;

	size = str_len(str);
	string = malloc(sizeof(char) * size + 1);
	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; let1[j] != '\0'; j++)
		{
			if (str[i] == let1[j])
			{
				string[i] = let2[j];
				break;
			}
		}
		i++;
	}
	string[i] = '\0';
	size = print_str(string);
	free(string);
	return (size);
}
