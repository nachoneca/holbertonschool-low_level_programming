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
	int a = 0, res = 0;

	for (a = 1; a < argc; a++)
	{
		if (argv[a][0] < 48 || argv[a][0] > 57)
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[a]);
	}
	printf("%d\n", res);
	return (0);
}
