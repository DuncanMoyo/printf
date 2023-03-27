#include <unistd.h>

/**
 * character_print - prints a character to the standard output
 * @c: character to print
 *
 * Return: 1 on success, -1 on failure
 */
int character_print(char c)
{
	return (write(1, &c, 1));
}
