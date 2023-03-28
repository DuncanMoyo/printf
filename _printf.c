#include "main.h"
#define BUFFER_SIZE 1024
/**
 * handle_specifier - handle a single specifier character
 * @specifier: the specifier character
 * @args: the argument list
 * Return: number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return (character_print(va_arg(args, int)));
	case 's':
		return (string_print(va_arg(args, char *)));
	case '%':
		return (percent_print());
	case 'b':
		return (print_binary(va_arg(args, unsigned int)));
	case 'd':
	case 'i':
		return (print_integer(va_arg(args, int)));
	case 'p':
		return (print_pointer(va_arg(args, void *)));
	case 'u':
		return (print_unsigned_int(va_arg(args, unsigned int)));
	case 'o':
		return (print_octal(va_arg(args, unsigned int)));
	case 'x':
		return (print_hex(va_arg(args, unsigned long int), 0));
	case 'X':
		return (print_hex(va_arg(args, unsigned long int), 1));
	case 'S':
		return (print_S(va_arg(args, char *)));
	default:
		return (character_print('%') + character_print(specifier));
	}
}

/**
 * _printf - print output according to a format
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list	args;
	int	count, i, j, ret;
	/* declaring a local buffer of size 1024 chars*/
	char  buffer[BUFFER_SIZE];

	count = 0, i = 0, j = 0;
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ret = handle_specifier(format[i], args);
			if (ret == -1)
			{
				return (-1);
			}
			count += ret;
		}
		else
		{
			if (j == BUFFER_SIZE)
			{
				/* buffer is full, write contents to stdout */
				write(1, buffer, BUFFER_SIZE);
				j = 0;
			}
			buffer[j++] = format[i];
			count++;
		}
		i++;
	}
	/* write any remaining characters in the buffer to stdout */
	if (j > 0)
	{
		write(1, buffer, j);
	}
	va_end(args);
	return (count);
}
