#include "main.h"

/**
 * print_triangle - draw a diagonal line
 * @size: number of times the '#' char is printed
 *
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size - i; j++)
	{
		_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}

	if (size < 1)
	{
		_putchar('\n');
	}
}
