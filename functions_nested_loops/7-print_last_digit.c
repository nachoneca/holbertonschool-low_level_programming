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
_putchar('0' + (udig * -1));
else
_putchar('0' + udig);
return (udig);
}
