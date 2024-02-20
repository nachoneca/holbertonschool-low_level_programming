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
		if (c % 3 == 0 && c % 5 == 0)			
			printf("FizzBuzz");
		else if (c % 5 == 0)
			printf("Buzz");
		else if (c % 3 == 0)
			printf("Fizz");
		else
			printf("%d", c);
		if (c != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
