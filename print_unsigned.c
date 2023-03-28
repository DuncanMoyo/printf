#include "main.h"
/**
 * print_unsigned_int - prints an unsigned integer
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_unsigned_int(unsigned int n)
{
	unsigned int divisor = 1, i, digit;
	int count = 0;

	while (n / divisor > 9)
		divisor *= 10;

	for (i = divisor; i >= 1; i /= 10)
	{
		digit = (n / i) % 10;
		count += _putchar(digit + '0');
	}

	return (count);
}
