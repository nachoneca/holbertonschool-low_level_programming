#include "main.h"
/**
 *_puts - prints string
 *@str: pointer name
 */
void _puts(char *str)
{
	for (; *str; str++)
	{
		_putchar(*str);
		_putchar('\n');
	}
}
