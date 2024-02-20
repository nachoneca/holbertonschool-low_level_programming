#include "main.h"
/**
 * print_square - imprime un cuadrado
 * @size: lol
 * Return: nada
 */
void print_square(int size)
{
	int n, j;

	n = size;
	j = size;
	if (size != 0)
	{
		for (j = 0; j < size; j++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
