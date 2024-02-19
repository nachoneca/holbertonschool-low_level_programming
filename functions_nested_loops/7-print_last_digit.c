#include "main.h"
/**
*print_last_digit - asdsa
*@c: asdsa
*Return: sada
*/
int print_last_digit(int c)
{
int udig = c % 10;
if (udig < 0)
printf("%d", (udig * -1));
else
printf("%d", udig);
return (udig);
}
