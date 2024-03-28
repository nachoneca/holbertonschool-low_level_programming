#include"lists.h"
/**
 *get_dnodeint_at_index - get the node that is asked for in the index
 *@head: pointer to the start of the chain of nodes
 *@index: n of node that will be returned
 *Return: node aseked
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
