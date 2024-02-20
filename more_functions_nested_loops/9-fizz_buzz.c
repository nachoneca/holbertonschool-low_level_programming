#include "main.h"
#include "stdio.h"
/**
*main - imprime del 1 al 100
*
* Return: 0
*/
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("Fizz ");
		else if (c % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", c);
	}
	return (0);
}
