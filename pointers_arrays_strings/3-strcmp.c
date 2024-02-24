#include "main.h"

/**
* _strcmp - compara dos string
* @s1: char 1
* @s2: char 2
*
* Return: menot a 0 si s1 es menor, 0 si son iguales, mayor
*/

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
