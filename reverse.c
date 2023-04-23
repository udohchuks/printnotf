#include "main.h"
/**
 * reverse_str - reverse string
 * @arg: arg
 * Return: string length
 */
int reverse_str(va_list arg)
{
	int size, low, high, i = 0;
	char *string;
	char tmp;
	char *str = va_arg(arg, char *);

	size = str_len(str);
	string = malloc(sizeof(char) * size + 1);
	low = 0;
	high = size - 1;
	while (i < size)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	while (low < high)
	{
		tmp = string[low];
		string[low] = string[high];
		string[high] = tmp;
		low++;
		high--;
	}
	size = print_str(string);
	free(string);
	return (size);
}

