#include "main.h"
#include <unistd.h>

/**
 * _printf - Print formatted text to standard output
 * @format: String containS format specifiers.
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
int count = 0;
va_list args;

va_start(args, format);

while (format && *format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
{
break;
}
if (*format == 'c')
{
char c = va_arg(args, int);
_putchar(c);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
{
str = "(null)";
}
while (*str)
{
_putchar(*str);
str++;
count++;
}
}
else if (*format == '%')
{
_putchar('%');
count++;
}
else
{
_putchar('%');
_putchar(*format);
count += 2;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}

va_end(args);
return count;
}
