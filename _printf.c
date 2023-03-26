#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of characters printed
 */
int	_printf(const char *format, ...)
{
	va_list	args;
	int i, len;

	va_start(args, format);
	len = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				len += print_char(args);
				break;
			case 's':
				len += print_str(args);
				break;
			case '%':
				len += print_percent(args);
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				len += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
