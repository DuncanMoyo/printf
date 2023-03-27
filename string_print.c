#include "main.h"
/**
 * string_print - prints a string to stdout
 * @str: string to be printed
 * Return: number of characters
*/
/* Print a string */
int	string_print(char *str)
{
	int len = 0;

	while (*str)
	{
		len += write(1, str, 1); /* write each character to stdout */
		str++;                   /* move to the next character in the string */
	}
	return (len); /* return the total number of characters written */
}
