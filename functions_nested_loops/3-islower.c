#include "main.h"
#include <ctype.h>
/**
*_islower - decirme si es minusciula
* @c: lol
*Return: ni idea
*/
int _islower(int c)
{
int resultado = islower(c);
if (resultado != 0)
return (1);
else
return (0);
}
