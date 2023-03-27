#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/* print output according to a format */
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
/* print binary */
int print_binary(unsigned int n);
/* print a character */
int character_print(char c);
/* print a string */
int string_print(char *str);
/* print a percent sign */
int percent_print(void);
int specifier_r(va_list args);

#endif

