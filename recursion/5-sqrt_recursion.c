#include "main.h"
int _raiz(int, int);
/**
 *_sqrt_recursion - find the root of entry number
 *@n: entry int
 *Return: root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);

	return (_raiz(n, 1));

}

/**
 *_raiz - find the root of a
 *@a: entry int
 *@b: entry int
 *Return: root of a
 */

int _raiz(int a, int b)
{
	if (b * b == a)
		return (b);

	return (_raiz(a, b + 1));
}
