#include"main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int a, b;

	for(a = 0; str[a] != '\0'; a++)
		;
	b = a / 2;
	for(; b <= a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
