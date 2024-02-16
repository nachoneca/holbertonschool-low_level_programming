#include "main.h"
/**
*Lo que quiero realizar es un loop de n veces del abecedario
*Haciendolo de esta manera utilizo la funcion de imprimir el abcedario
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
}
_putchar('\n');

}
