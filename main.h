#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_str(va_list val);
int _strlen(char *str);
int _strlength(const char *str);
int print_37(void);

#endif
