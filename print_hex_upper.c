#include "main.h"

/**
 * print_hex_upper - prints an uppercase hexidecimal format
 * @n: the number to be converted
 * Return: the result of the conversion
 */

int print_hex_upper(unsigned long int n)
{
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;

	if (n / 16)
	{
		count += print_hex_upper(n / 16);
	}
	count += _putchar(hex_digits[n % 16]);

	return (count);
}
