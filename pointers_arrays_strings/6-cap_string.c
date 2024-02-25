#include"main.h"
/**
 *cap_string - cap all words of str
 *@str: name of str
 *Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			putchar(str[i]);
		}
		for (; (str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z'); i++)
		{
			putchar(str[i]);
		}
		putchar(' ');
	}
	return (str);
}
