#include"main.h"
/**
 *_strpbrk - compare one string to anoher and when one letter matches print the rest
 *@s: name of main str
 *@accept: name of str to check
 *Return: first possition when main srt and the other matches
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (NULL);


}
