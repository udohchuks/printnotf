#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER 1024
int _printf(const char *format, ...);
typedef struct
{
	char type;
	int (*f)(va_list);
} format;
int print_int(va_list);
int print_uint(va_list);
int percentage_handler(const char *str, va_list, int *i);
void _memset(char *buff, int size);
int print_str(char *str);
char *itoa(long int, char *, int);
char *itoa_HEX(long int, char *, int);
int _putchar(char c);
int str_len(const char *str);
int print_char(va_list);
int print_string(va_list);
int print_bin(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_add(va_list);
int reverse_str(va_list);
int rot13(va_list);
int printf(const char *format, ...);
#endif
