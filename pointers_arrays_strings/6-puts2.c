#include"main.h"
/**
 *puts2 - prints only even numbers
 *@str: name string
 *
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
