#include "main.h"

/**
 *times_table - tabla del 0 al 9
 *Return: nada
 */

void times_table(void)
{
int f, c;
for (f = 0; f < 10; f++)
{
for (c = 0; c < 10; c++)
{
int result = f * c;
if (result < 0)
_printf(result + '0');
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
