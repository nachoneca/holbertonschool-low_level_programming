#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d;
char num;
for (d = '0'; d <= '9'; d++)
putchar(d);
for (num = 'a'; num <= 'f'; num++)
putchar(num);
putchar('\n');
return (0);
}
