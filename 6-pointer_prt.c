#include "main.h"

/**
 * pointer_prt - prints a pointer
 * @val: the argument
 *
 * Return: Always 0
 */

int pointer_prt(va_list val)
{
void *p;
char *s = "(nil)";
long int i;
int k, j;
p = va_arg(val, void *);
if (p == NULL)
{
for (k = 0 ; s[k] != '\0' ; k++)
{
_putchar(s[k]);
}
}
i = (unsigned long int)p;
_putchar('0');
_putchar('x');
j = print_hex(i);
return (j + 2);
}
