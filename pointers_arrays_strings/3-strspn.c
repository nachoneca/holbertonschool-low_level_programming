#include"main.h"
/**
 *_strspn - give us n of prefix substring
 *@s: main str
 *@accept: str to check
 *Return: num of char repeated
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, coin = 0;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				coin = 1;
				break
			}
		}
		if (!coin)
			break;
	}
	return (c);
}
