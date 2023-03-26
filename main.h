#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

#endif
