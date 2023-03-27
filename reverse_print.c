#include "main.h"
/**
 * reverse_print - print a string in reverse
 * @str: string to print in reverse
 * Return: number of characters printed
 */
int reverse_print(char *str)
{
	int len, i, count = 0;

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		count += character_print(str[i]);

	return (count);
}

/**
 * specifier_r - handles the %r specifier
 * @args: va_list containing the argument to print
 * Return: number of characters printed
 */
int specifier_r(va_list args)
{
	char *str = va_arg(args, char *);

	return (reverse_print(str));
}
