#include "main.h"
/**
*print_alphabet_x10 - imprimir 10 veces el alphabet
*Return: ni idea
*/
void print_alphabet_x10(void)
{
int abc;
char letra;
for (abc = 0; abc < 10; abc++)
{
for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
}
