#include "main.h"
/**
 * _printf - prints to std output
 * @format: format
 * Return: size of character printed
 */
int _printf(const char *format, ...)
{
	int i = 0, size = 0, size_arg, len, n = 0;
	va_list arg;

	if (format == NULL)
		return (-1);
	if (format[i] == '\0')
		return (0);
	va_start(arg, format);

	len = str_len(format);
	while (i < len)
	{
		if (format[i] == '\\' && format[i + 1] == 'n' && format[i + 2] == '\0')
			n = 1;
		if (format[i] != '%')
		{
			_putchar(format[i]);
			size++;
		}
		else
		{
			size_arg = percentage_handler(format, arg, &i);
			size += size_arg;
		}
		i++;
	}
	if (n)
		_putchar('\n');
	va_end(arg);
	return (size);
}
