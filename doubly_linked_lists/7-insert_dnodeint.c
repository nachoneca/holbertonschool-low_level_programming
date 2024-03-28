#include"lists.h"
/**
 *insert_dnodeint_at_index - ad a node at the index
 *@h: pointer that points at the start of the chain
 *@idx: number of the chain that wanted to be inserted the new node
 *@n: n is the number that will carry the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int i = 0;
	dlistint_t *aux;

	aux = *h;
	while (aux != NULL && i < idx - 1)
	{	
		aux = aux->next;
		i++;
	}
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = aux;
	new_node->n = n;
	new_node->next = aux->next;
	(aux->next)->prev = new_node;
	aux->next = new_node;
	return (new_node);
}
