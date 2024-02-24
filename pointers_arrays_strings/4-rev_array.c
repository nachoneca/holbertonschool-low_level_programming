#include"main.h"
/**
 *reverse_array - is to reverse an array of num
 *@a: is the array we want to reverse
 *@n: is the size of the array
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
