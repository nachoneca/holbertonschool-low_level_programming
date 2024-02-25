#include"main.h"
/**
 *cap_string - cap all words of str
 *@str: name of str
 *Return: string
 */
char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			putchar(str[i]);
			continue;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			putchar(str[i]);
		}
		for (j = i; (str[j] >= 'A' && str[j] <= 'Z') ||
		(str[j] >= 'a' && str[j] <= 'z'); j++)
		{
			putchar(str[j]);
		}
		putchar(' ');
	}
	return (str);
}
