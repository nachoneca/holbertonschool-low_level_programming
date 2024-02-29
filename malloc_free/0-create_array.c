#include"main.h"
/**
 *create_array - creates an array of char
 *@size: size of array
 *@c: is the character that will iniciate the array with
 *Return: the array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
