#include"main.h"
/**
 *_print_rev_recursion - prints the str in reverse
 * because we are calling the func befor printing
 * and have to solve the last func first.
 *@s: name of pointer of str
 *
 */
void _print_rev_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[a]);
}
