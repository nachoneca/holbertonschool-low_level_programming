#include"lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	
	for (; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		count++;
	}
	return (count);
	
}
