#include "main.h"

/**
 * char_print - prints an integer
 * @val: the argument
 *
 * Return: Always 0
 */

int char_print(va_list val)
{
char j;

j = va_arg(val, int);
_putchar(j);
return (0);
}
