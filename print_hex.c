#include "main.h"

/**
 * print_hex - prints a number in hexadecimal format
 * @n: the number to be printed
 * Return: the hexadecimal characters
 */

int print_hex(unsigned long int n, int uppercase)
{
	char hex_digits[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
	{
		count += print_hex(n / 16, uppercase); /* because print_hex takes two arguments */
	}
	if (uppercase)
	{
		count += _putchar(hex_digits[n % 16] - 32 * (n % 16 > 9));
	}
	else
	{
		count += _putchar(hex_digits[n % 16]);
	}

	return (count);
}
