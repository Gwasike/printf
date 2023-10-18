#include "main.h"

/**
 * printf_char - prints character
 * @val: the argument
 * @va_list: the variable list
 *
 * Return: Always 0
 */

int printf_char(va_list val)
{
char str;
str = va_arg(val, int);
_putchar(str);
return (1);
}
