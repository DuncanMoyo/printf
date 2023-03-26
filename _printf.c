#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j, count;

	i = 0;
	count = 0;

	if (*format == '\0')
	{
		return (-1);
	}	

	va_start(arg, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				count += _putchar(va_arg(arg, int));
			} else if (format[i] == 's')
			{
				char *str = va_arg(arg, char *);
				int len = _strlen(str);

				for (j = 0; j < len; j++)
				{
					count += _putchar(str[j]);
				}
			} else if (format[i] == '%')
			{
				count += _putchar('%');
			} else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		} else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(arg);

	return (count);
}

