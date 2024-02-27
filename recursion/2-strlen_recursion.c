#include"main.h"
/**
 *_strlen_recursion - return the length of the str
 *@s: name of pointer to str
 *Return: value of a
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
