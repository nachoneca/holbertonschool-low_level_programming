#include"lists.h"
/**
 *add_dnodeint_end - adds a new node to the end of the chain
 *@head: pointer that points to the start of the chain of nodes
 *@n: int that will recieve the new node
 *Return: returns the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			head = &(*head)->next;
		(*head)->next = new_node;
		new_node->prev = *head;
	}
	else
		*head = new_node;
	return (new_node);
}
