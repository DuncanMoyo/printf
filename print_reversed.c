#include "main.h"

/**
 * print_reversed - prints a string in reverse
 * @str: the strinf to be reversed
 * Return: the string in reverse
 */

int print_reversed(char *str)
{
	int i, len;

	len = _strlen(str);
	
	for (i = len -1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
