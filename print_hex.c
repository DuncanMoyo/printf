#include "main.h"

/**
 * print_hex - prints a number in hexadecimal format
 * @n: the number to be printed
 * Return: the hexadecimal characters
 */

int print_hex(unsigned long int n)
{
	char hex_digits[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
	{
		count += print_hex(n / 16);
	}

	count += _putchar(hex_digits[n % 16]);

	return (count);
}
