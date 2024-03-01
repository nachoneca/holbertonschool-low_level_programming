#include"main.h"
/**
 *malloc_checked - creates a pointer to a memory of size b
 *@b: size of memory
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
