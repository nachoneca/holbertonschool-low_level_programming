#include"main.h"
/**
 *array_range - create an array of range min to max
 *@min: num min
 *@max: num max
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int b;
	int *ptr;
	
	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (b = min; b <= max; b++)
		ptr[b] = min + b;
		
	return (ptr);


}
