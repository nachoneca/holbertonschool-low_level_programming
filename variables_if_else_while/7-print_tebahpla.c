#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	putchar(x);
	putchar('\n');

	return (0);
}
