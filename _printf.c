#include "main.h"

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
	va_list args;
	int count = 0, i = 0;

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
			count += handle_specifier(format[i], args);
		}
		else
			count += character_print(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
