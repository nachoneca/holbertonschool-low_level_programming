#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: The error return
 */
int main(void)
{

	char x;
	int c;
	long int lc;
	long long int llc;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lc));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llc));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
