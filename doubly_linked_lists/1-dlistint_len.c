#include"lists.h"
/**
 *dlistint_len - gives us the ammount of nodes on the list
 *@h: pointer to the start of the chain of nodes
 *Return: return the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
