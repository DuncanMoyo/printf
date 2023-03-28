#include "main.h"

/**
 * print_u - prints the unsigned integer
 * @args: list of arguments
 * Return: printed result
 */

int print_unsigned_int(unsigned int n)
{
	if (n / 10)
	{
		return (print_unsigned_int(n / 10) + _putchar((n % 10) + '0'));
	}
	return (_putchar(n % 10 + '0'));
}
