#include "main.h"

/**
 * _printf - prints the format
 * @format: the format string
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
int print_char = 0;
va_list args_list;

if (format == NULL)
{
return (-1);

va_start(args_list, format);

while (*format)
{
if (*format != '%')
{
write(1, format, 1);
print_char++;
}
else
{
format++;
if (*format == '\0')
{
break;
if (*format == '%')
{
write(1, format, 1);
print_char++;
}
else if (*format == 'c')
{
char c = va_arg(args_list, int);
write(1, &c, 1);
print_char++;
}
else if (*format == 's')
{
char *str = va_arg(args_list, char*);
int str_length = 0;

while (str[str_length] != '\0')
{
str_length++;
}
write(1, str, str_length);
print_char += str_length;
}
}
}
format++;
}

va_end(args_list);
return (print_char);
}
return (print_char);
}
