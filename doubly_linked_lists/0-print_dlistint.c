#include"lists.h"
/**
 *print_dlistint - prints every info inide each node
 *@h: pointer to the start of the chain of nodes
 *Return: returns the amount of nodes printed
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
