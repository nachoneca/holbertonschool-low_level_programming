#include "main.h"
/**
*print_sign - devuelve si es mayuscula o no
*@n: parametro letras
*Return: 0 o 1 segun lo que sea
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
