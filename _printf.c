#include "main.h"
#include <unistd.h>
/**
 * _printf - print output according to a format
 * @format: format string
 * Return: number of characters printed
<<<<<<< HEAD
 */
=======
*/
>>>>>>> ec64b79 (test functions)
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;

<<<<<<< HEAD
	if (format == NULL || *format == '\0')
		return (-1);

	va_start(args, format);
	len = 0;
	for (i = 0; format[i] != '\0'; i++)
=======
	if (format == NULL)
>>>>>>> ec64b79 (test functions)
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
<<<<<<< HEAD
				len += print_percent(args);
				break;
			case 'b':
				len += print_binary(va_arg(args, unsigned int));
				break;
=======
				count += percent_print();
				break;			
>>>>>>> ec64b79 (test functions)
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