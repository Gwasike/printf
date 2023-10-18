#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list val);
int string_print(va_list val);
int _jlen(char *j);
int _jlenn(const char *j);
int print_rem(void);
int int_prt(va_list args);
int int_prtt(va_list args);
int print_bin(va_list val);
int unsigned_int(va_list args);
int octal_prt(va_list val);
int print_x(va_list val);
int print_X(va_list val);
int printXX(unsigned int num);
int print_Str5(va_list val);
int print_hex(unsigned long int num);
int pointer_prt(va_list val);

#endif
