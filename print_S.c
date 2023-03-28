#include "main.h"

/**
 * print_S - prints the string
 * @str: input string
 * Return: the string
 */

int print_S(char *str)
{
	int count;

	count = 0;

	if (str == NULL)
	{
		return (-1);
	}
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			count += _putchar('\\') + _putchar('x') +
			_putchar('0') + _putchar('A');
		} else if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hex(*str, 1);
		} else
		{
			count += _putchar(*str);
		}
		str++;
	}
	return (count);
}
