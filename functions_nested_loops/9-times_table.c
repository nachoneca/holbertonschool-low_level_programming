#include "main.h"

/**
 *times_table - tabla del 0 al 9
 *Return: nada
 */

void times_table(void)
{
	int f, c, res;

	for (f = 0; f <= 9; f++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');

			res = f * c;

			if (res <= 9)
				_putchar(' ');
			else
			
				_putchar((res / 10) + '0');
				
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
