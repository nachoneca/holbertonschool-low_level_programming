#include"main.h"
/**
 *_strncat - merge 2 strings until n
 *@dest: main string
 *@src: string to merge
 *@n: num og bytes to merge
 *Return: the string merged
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
		dest[a] = '\0';
	return (dest);



}
