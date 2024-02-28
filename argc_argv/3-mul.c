#include"main.h"
#include<stdlib.h>
/**
 *main - print result of 2 num
 *@argc: num of arguments
 *@argv: what inside of each argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, resul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	resul = a * b;
	printf("%i\n", resul);
	return (0);
}
