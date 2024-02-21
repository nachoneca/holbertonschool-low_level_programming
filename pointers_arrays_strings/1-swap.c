#include "main.h"
/**
 *swap_int - swap the values of variables
 *@a: name of pointer
 *@b: name of pointer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
