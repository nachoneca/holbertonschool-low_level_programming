#include"function_pointers.h"
/**
 *int_index - function that is given ana array of size.
 *that will complete the action of the function cmp
 *@array: array of int
 *@size: size of the array
 *@cmp: function that compares elements in the array and give t or f
 *Return: if not found matches return -1, if yes, return i
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
