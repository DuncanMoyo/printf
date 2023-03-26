#include "main.h"

/**
 * _printf - produces ouput according to a format
 * @format: character string
 *
 * Return: the number of chars printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *str_arg, c_arg;
	const char *p;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					c_arg = (char) va_arg(args, int);
					_putchar(c_arg);
					printed_chars++;
					break;
				case 's':
					str_arg = va_arg(args, char *);
					for (; *str_arg != '\0'; str_arg++)
					{
						_putchar(*str_arg);
						printed_chars++;
					}
					break;
				case '%':
					_putchar('%');
					printed_chars++;
					break;
				default:
					_putchar('%');
					_putchar(*p);
					printed_chars += 2;
					break;
			}
		}
		else
		{
			_putchar(*p);
			printed_chars++;
		}
	}
	va_end(args);
	return (printed_chars);
}
