#include "main.h"

/**
 *  * _isdigit - devuede si es digito o no
 *   * @c: el in si es un digito
 *    * Return: retorna 0 o 1 si e sun numero o no
 *     */

int _isdigit(int c)
{
	if (isdigit(c)> 0)	
		return (1);
	else
		return (0);
}
