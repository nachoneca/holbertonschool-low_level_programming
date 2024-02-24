#include"main.h"
/**
 *string_toupper - is to change minus into mayus in str
 *@str: name of string
 *Return: return str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
			str[i] = str[i] - 32;
	}
	return (str);
}
