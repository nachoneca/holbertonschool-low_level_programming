#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int a, b;
	char x;

	for (a = 0; s[a] != '\0'; a++)
		;
	a--;
	for (b = 0; b < a / 2; b++)
	{	x = s[b];
		s[b] = s[a];
		s[a] = x;
	}
}
