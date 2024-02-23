#include "main.h"
/**
*print_array - prints thngs inside array
*@a: name array
*@n: number of data given
*/
void print_array(int *a, int n)
{
	int size;

	for (size = 0; size < n; size++)
	{
		printf("%d", a[size]);
		if (size != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
