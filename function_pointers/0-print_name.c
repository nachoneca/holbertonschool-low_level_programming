#include"function_pointers.h"
/**
 *print_name - prints name
 *@name: the name wanted to print
 *@f: the pointer to the char
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
