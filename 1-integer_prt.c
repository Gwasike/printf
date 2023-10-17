#include "main.h"

/**
 * int_prt - prints an integer
 * @args: the arguments
 *
 * Return: Always 0
 */

int int_prt(va_list args)
{
int m = va_arg(args, int);
int num, k = n % 10, digit, l = 1;
int j = 1;

m = m / 10;
num = m;
if (k < 0)
{
_putchar('_');
num = -num;
m = -m;
k = -k;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
l = l * 10;
num = num / 10;
}
num = m;
while (exp > 0)
{
digit = num / l;
_putchar(digit + '0');
num = num - (digit *l);
l = l / 10;
i++;
}
}
_puchar(k + '0');
return (i);
}

#include "main.h"

/**
 * int_prtt - prints an integer
 * @args: the arguments
 *
 * Return: Always 0
 */

int int_prtt(va_list args)
{
int m = va_arg(args, int);
int num, k = n % 10, digit, l = 1;
int j = 1;

m = m / 10;
num = m;
if (k < 0)
{
_putchar('_');
num = -num;
m = -m;
k = -k;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
l = l * 10;
num = num / 10;
}
num = m;
while (exp > 0)
{
digit = num / l;
_putchar(digit + '0');
num = num - (digit *l);
l = l / 10;
i++;
}
}
_puchar(k + '0');
return (i);
}
