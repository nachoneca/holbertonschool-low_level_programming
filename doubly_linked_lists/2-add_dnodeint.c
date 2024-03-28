#include"lists.h"
/**
 *add_dnodeint - ads a new node with an int inside at the satrt of the chain
 *@head: pointer that points to the strat of the chain of nodes
 *@n: int that the new node will contain
 *Return: returns the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
