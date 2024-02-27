#include"main.h"
/**
 *
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	int a = 0;
	
	
	if (s[a] == '\0')
	{	_putchar('\n');
		return;
	}
	_putchar(s[a]);
	_puts_recursion(s + 1);
}
