#include "main.h"

/**
 * print_pointer - shows the value of the pointer
 * @ptr: the value of the pointer
 * Return: the value
 */

int print_pointer(void *ptr)
{
	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hex(address);

	return (count);
}
