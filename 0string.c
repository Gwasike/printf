#include "main.h"

/**
 * string_print - prints a string
 * @val: the argument
 *
 * Return: Always 0
 */

int string_print(va_list val)
{
int length;
int i;
char j;

j = va_arg(val, char *);
if (j == NULL)
{
j = "(null)";
length = _jlen(j);
for (i = 0 ; i < length ; i++)
{
_putchar(j[i]);
}
return (length);
}
else
{
length = _jlen[i];
for (i = 0 ; i < length ; i++)
{
_putchar(j[i]);
}
return (length);
}
}
