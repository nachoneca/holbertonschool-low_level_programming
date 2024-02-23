#include"main.h"
/**
 *_strncpy - copy one tring to another until n characters
 *@dest: string to paste main string
 *@src: main string
 *@n: numer of char that want to be copied
 *Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for( ; a < n; i++) 
		dest[a] = '\0';
	return (dest);
}
