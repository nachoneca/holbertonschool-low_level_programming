#include"main.h"
/**
 *main - prints name of program
 *@argc: variable that will flollow th n of arguments
 *@argv: contains the name of the program
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("%s\n", argv[0]);
	return (0);


}
