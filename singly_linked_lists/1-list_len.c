#include"lists.h"
/**
 *list_len - qtty of nodes
 *@h: pointer to the first node
 *Return: count
 */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; h = h->next)
		count++;
	return (count);
}
