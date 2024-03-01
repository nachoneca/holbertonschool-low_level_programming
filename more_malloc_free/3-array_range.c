#include"main.h"
/**
 *array_range - create an array of range min to max
 *@min: num min
 *@max: num max
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int a = 0, b;
	int *ptr;
	
	if (min > max)
		return (NULL);

	for (a = min; a <= max; a++)
		;
	ptr = malloc(a *sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		ptr[b] = min + b;
		
	return (ptr);


}
