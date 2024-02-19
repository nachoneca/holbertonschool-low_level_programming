#include <ctype.h>
#include "main.h"

/**
 *  *_isupper - es o no es mayuscula
 *   *@c: numero
 *    *Return: es o no es mayuscula
 *     */

int _isupper(int c)
{
	if(isupper(c) > 0)
		return (1);
	else
	 	return (0);
}
