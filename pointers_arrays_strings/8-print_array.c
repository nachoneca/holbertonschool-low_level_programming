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
			if (size != '\0')
				printf(", ");
	}
	printf("\n")
}
