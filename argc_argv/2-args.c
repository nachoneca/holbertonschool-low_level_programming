#include"main.h"
/**
 *main - prints wat is inside of each argv
 *@argc: cuantity of arguments
 *@argv: whats inside of argv
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
