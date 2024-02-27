#include"main.h"
/**
 *_pow_recursion - multiplies x, y times
 *@x: the number we want to multyply
 *@y: the numbers of times we multiply y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));



}
