#include"main.h"
/**
 *_strstr - locate a string inside anotehr
 *@haystack: main string
 *@needle: tring to locate inside main
 *Return: the position of the amin str when second str matches
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0' && haystack[a + b] == needle[b]; b++)
		{
			;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (NULL);
}

