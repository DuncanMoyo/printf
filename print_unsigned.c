#include "main.h"
/**
 * print_unsigned - print an unsigned decimal number
 * @n: the number to print
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned(n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_octal - print an unsigned octal number
 * @n: the number to print
 * Return: number of characters printed
 */
/* int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);
	count += _putchar((n % 8) + '0');
	return (count);
}
*/
/**
 * print_hex - print an unsigned hexadecimal number
 * @n: the number to print
 * @uppercase: whether to print in uppercase
 * Return: number of characters printed
 */
/* int print_hex(unsigned long int n, int uppercase)
{
	char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	int count = 0;

	if (n / 16)
		count += print_hex(n / 16, uppercase);
	count += _putchar(hex_digits[n % 16]);
	return (count);
}
*/