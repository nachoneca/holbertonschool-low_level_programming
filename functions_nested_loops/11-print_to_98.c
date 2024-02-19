#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - no se bien
 * @n: numero XD
 * Return: no se bien
 */

void print_to_98(int n)
{
int j = 98;
int k;
	if (n != 98)
		{
		if (n > 98)
			{
			for (k = n; k > j; k--)
			printf("%d, ", k);
			}
		else
		{
		for (k = n; k < j; k++)
		printf("%d, ", k);
		}
		}
printf("%d\n", j);
}
