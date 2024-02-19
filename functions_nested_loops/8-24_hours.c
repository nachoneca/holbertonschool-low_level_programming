#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - imprime los minutos
 *Return: void
 */
void jack_bauer(void)
{
int hora, min;
for (hora = 0; hora <= 23; ++hora)
{
for (min = 0; min <= 59; ++min)
{
_putchar((hora / 10) + '0');
_putchar((hora % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
