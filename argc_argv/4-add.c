#include <ctype.h>
#include"main.h"
#include<stdlib.h>
/**
 *main - adds all numbers of the arguments
 *@argc: number of arguments
 *@argv: inside of each arg
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;

	for (a = 1; a < argc; a++)
	{
		for (; argv[a][b]; b++)
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[a]);
	}
	printf("%d\n", res);
	return (0);
}
