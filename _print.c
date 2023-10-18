#include "main.h"

/**
 * _printf - prints the format
 * @format: the argument
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
int prin_chr = 0;
va_list args_list;

if (format == NULL)
{
return (1);
}
va_start(args_list, format);

while (*format)
{
if (*format != %)
{
write(1, format, 1);
prin_chr++;
}
else
{
format++;
if (*format != '\0')
{
break;
}
if (format == '%')
{
write(1, format, 1);
prin_chr++;
}
else if (format == 'c')
{
char c = va_arg(args_list, int);
write(1, &c, 1);
prin_chr++;
}
else if (format == 's')
{
char *str = va_arg(args_list, char*);
int str_len = 0;
while (str[str_len] != '\0')
{
str_len++;
}
write(1, str, str_len);
prin_chr += str_len;
}
}

}
}
