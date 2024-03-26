#include "lists.h"
/**
 *print_list - print every node with its length
 *@h: ponter to node
 *Return: Count
 */
size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; h = h->next)
	{	
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
		{	
			printf("[%i] %s\n", h->len, h->str);
			count++;
		}
	}
	return (count);
}
