#include"lists.h"
/**
 *delete_dnodeint_at_index - delete the node that is specified in index
 *@head: pointer that points to the start of the chain of nodes
 *@index: number of node that will free
 *Return: 1 if succed, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;

	for (; i < index && aux != NULL; i++)
		aux = aux->next;

	if (aux == NULL)
		return (-1);

	if (aux == *head)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = aux->prev;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next != NULL)
			aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}
