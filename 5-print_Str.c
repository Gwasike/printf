#include "main.h"

int print_Str5(va_list val)
{
char *i;
int j, length = 0;
int value;

i = va_arg(val, char *);
if (i == NULL)
{
i == "(null)";
}
for (j = 0 ; i[j] != '\0' ; j++)
{
if (i[j] < 32 || i[j] >= 127)
{
_putchar('\\');
_putchar('x');
length = length + 2;
if (value < 16)
{
_putchar('0');
length++;
}
length = length + printXX(value);
}
}
}
