#include"lists.h"
/**
 *free_dlistint - frees all the node of the chain
 *@head: pointer to the start of the chain of nodes
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
