#include"main.h"
/**
 *puts_half - to print half of str
 *@str: name of str
 *
 */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
		;
	b = a / 2;
	if (a % 2 != 0)
		_putchar(str[b]-(b-1));
	else
		for (; str[b] != '\0'; b++)
			_putchar(str[b]);
	_putchar('\n');
}
