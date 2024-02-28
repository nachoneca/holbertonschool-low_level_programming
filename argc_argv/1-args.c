#include"main.h"
/**
 *main - prints num of arguments
 *@argc: count the arguments
 *@argv: call the string inside
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%i\n", argc);
	return (0);
}
