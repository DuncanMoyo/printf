#include "main.h"

/**
 * print_integer - print an integer to stdout
 * @n: integer to be printed
 * Return: number of characters
 */
int	print_integer(int n)
{
	unsigned int	num;
	int				count;

	count = 0;
	if (n < 0)
	{
		count += character_print('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		count += print_integer(num / 10);
	}
	count += character_print((num % 10) + '0');
	return (count);
}
