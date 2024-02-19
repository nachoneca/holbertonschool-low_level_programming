#include "main.h"
/**
*print_last_digit - asdsa
*@c: asdsa
*Return: sada
*/
int print_last_digit(int c)
{
int udig = c % 10;
if (c < 0)
{
udig = c % 10 * -1;
_putchar('0' + udig);
}
else
_putchar('0' + udig);
return (udig);
}
