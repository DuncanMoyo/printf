#include "main.h"

/**
 * print_octal - prints the number as an octal
 * @n: the number to be converted to octal
 * Return: number of digits printed
 */

int print_octal(unsigned int n)
{
	int count;

	count = 0;

	if (n / 8)
	{
		count += print_octal(n / 8);
	}
	count += _putchar((n % 8) + '0');

	return (count);
}
