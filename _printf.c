#include "main.h"
#include <unistd.h>
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
	while(format[i] != '\0')
	{
		if(format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				count += character_print(va_arg(args, int));
				break;
			case 's':
				count += string_print(va_arg(args, char *));
				break;
			case '%':
				count += percent_print();
				break;
			case 'b':
				count += print_binary(va_arg(args, unsigned int));
    			break;
			case 'r':
				count += specifier_r(args);
				break;
			default:
				count += character_print('%');
				count += character_print(format[i]);
				break;
			}
		}
		else
		{
			count += character_print(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}