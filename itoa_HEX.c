#include "main.h"
/**
 * itoa_HEX - converts int in base base to string
 * @num: number
 * @buffer: buffer
 * @base: base to be converted to
 * Return: pointer to buffer
 */
char *itoa_HEX(long int num, char *buffer, int base)
{
	int i = 0, is_neg = 0;
	int start, end, rem;
	char c;

	if (num == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (buffer);
	}
	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		buffer[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num /= base;
	}
	if (is_neg)
	{
		buffer[i++] = '-';
	}
	buffer[i] = '\0';
	/* Reverse Buffer */
	start = 0;
	end = i - 1;
	while (start < end)
	{
		c = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = c;
		start++;
		end--;
	}
	return (buffer);
}
