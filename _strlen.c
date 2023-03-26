#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the string that will be checked
 * Return: length of the queried string
 *
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
