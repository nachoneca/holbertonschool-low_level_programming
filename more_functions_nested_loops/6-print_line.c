#include "main.h"
/**
 * print_line - imprime una linea
 * @n: lol
 * Return: 0
 */
void print_line(int n)
{
	int j;

	j = n;
		if (n != 0)
		{
		for (j = 0; j < n; j++)
		_putchar('_');
		}
	_putchar('\n');
}
