#include"main.h"
/**
 *_atoi - takes a string and make it a number
 *@s: the string given to us
 *Return: number * sign
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	for (; *s != '\0'; s++)
	{
	if (*s == '-')
		sign *= -1;
	else if (*s >= '0' && *s <= '9')
		num = num * 10 + (*s - '0');
	else if (num > 0)
	break;
	}
	return (num * sign);
}
