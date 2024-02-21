#include "main.h"
/**
 *_strlen - prnt size of string
 *@s: name of pointer
 *Return: command of size of string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s; s++)
	{
		len = len + 1;
	}
	return (len);
}
