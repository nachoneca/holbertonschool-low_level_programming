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
	if (a % 2 != 0)
                        _putchar(b - 1);
	else
		for(; b <= a; b++)
			_putchar(str[b]);
}
