#include "main.h"

/**
 * print_bin - prints a binary
 * @val: argument
 *
 * Return: ALways 0
 */

int print_bin(va_list val)
{
int n = 0;
int m = 0;

int k, l = 1, b;
unsigned int num = va_arg(val, unsigned int);
unsigned int a;

for (k = 0 ; k < 32 ; k++)
{
a  = ((l << (32 - k)) & num);
if (a >> (31 - k))
{
n = 1;
}
if (n)
{
b = a >> (31 - k);
_putchar(b + 48);
m++;
}
}
if (m == 0)
{
m++;
_putchar('0');
}
return (m);
}
