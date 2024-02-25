#include"main.h"
/**
 *cap_string - cap all words of str
 *@str: name of str
 *Return: string
 */
char *cap_string(char *str)
{
	int minus = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			minus = 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && minus == 1)
		{
			str[i] = str[i] - 32;
			minus = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			minus = 0;
		}
		else if	(str[i] >= '0' && str[i] <= '9')
		{
			minus = 0;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			minus = 0;
		}
	}
	return (str);
}
