#include"main.h"
/**
 *_memcpy - copy n characters to another array
 *@dest: array that will be changed
 *@src: array to copy
 *@n: n char to copy
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
