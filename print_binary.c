#include "main.h"

/**
 * print_binary - converts an int into binary
 * @n: the number to convert
 * Return: the printed result
 */

int print_binary(unsigned int n)
{
	int count;

	count = 0;

	if (n > 1)
	{
		count += print_binary(n >> 1);
	}
	count += _putchar((n & 1) + '0');

	return (count);
}
