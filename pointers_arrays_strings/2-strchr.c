#include"main.h"
/**
 *_strchr - gives the location of c on my array
 *@s: str given
 *@c: the character given that we will try to locate
 *Return: if c not found return NULL, if found return the possition of c
 *
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != c; a++)
	{
		if (s[a] == '\0')
			return ('\0');
	}
	return (s + a);
}
