#include"main.h"
/**
 *array_range - create an array of range min to max
 *@min: num min
 *@max: num max
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int b, size;
	int *ptr;
	
	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (b = min; b < size; b++)
		ptr[b] = min + b;
		
	return (ptr);


}
