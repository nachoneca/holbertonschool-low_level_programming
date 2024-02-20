#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int c, i;
	c = 0;

	for (; n > 0; n--)
	{
		for (i = 0; i < c; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		c++;
	}

	if (c < 1)
	{
		_putchar('\n');
	}
}
