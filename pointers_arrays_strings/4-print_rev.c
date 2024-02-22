#include "main.h"
/**
 *print_rev - is to print the string in REVERSE
 *@s: is the name of string
 */
void print_rev(char *s)
{
	int len, a;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (a = len - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
