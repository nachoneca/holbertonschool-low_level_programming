#include"main.h"
/**
 *factorial - returns the value of factorial of n
 *@n: number we will use
 *Return: value of factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
