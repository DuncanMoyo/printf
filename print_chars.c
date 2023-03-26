#include "main.h"
/**
 * print_char - prints a character
 * @args: list of arguments
 * 
 * Return: number of characters printed
*/
int print_char(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}

/**
 * print_str - prints a string
 * @args: list of arguments
 * 
 * Return: number of characters printed
*/
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int len = _strlen(str);
    int i;

    for (i = 0; i < len; i++)
        _putchar(str[i]);

    return (len);
}