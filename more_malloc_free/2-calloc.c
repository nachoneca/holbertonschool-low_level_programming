#include "main.h"
/**
 *_calloc - allocates memory for an array
 *@nmemb: memory wanted to asign
 *@size: size wanted to asign
 *Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
