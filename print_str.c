#include "main.h"
#include <string.h>
/**
 * printf_str - prints a string
 * @val: the argument
 *
 * Return: Always 0
 */

int printf_str(va_list val)
{
char *str;
int a;
int len;

str = va_arg(val, char *);
if (str == NULL)
{
str = "(null)";
len = _strlen(str);
for (a = 0 ; a < len ; a++)
{
_putchar(str[a]);
}
return (len);
}
else
{
len = _strlen(str);
for (a = 0 ; a < len ; a++)
{
_putchar(str[a]);
}
return (len);
}
}
