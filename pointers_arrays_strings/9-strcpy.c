#include"main.h"
/**
 *_strcpy - to copy a string to another
 *@src: string to copy
 *@dest: string destination
 *Return: destinatario
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
