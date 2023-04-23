#include "main.h"
/**
 * _memset - initialize buffer with 0
 * @buffer: pointer to buffer
 * @size: size of buffer
 */
void _memset(char *buffer, int size)
{
	int i = 0;

	while (i < size)
	{
		buffer[i] = 0;
		i++;
	}
}
