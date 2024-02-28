#include <ctype.h>
#include"main.h"
/**
 *main - adds all numbers of the arguments
 *@argc: number of arguments
 *@argv: inside of each arg
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0, res = 0;

	if (argc == 0)
		printf("0\n");
	for (a = 1; argv[a]; a++)
	{
		if (!isdigit(argv[a]))
		{
			printf("Error\n");
			return (1);
		}
		res = res + a;
	}
	printf("%i\n", res);
	return (0);
}
