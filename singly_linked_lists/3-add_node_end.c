#include"lists.h"
/**
 *add_node_end - ads a new node to the end of the node chain
 *@head: pointer to a pointer to the start of the chain
 *@str: pointer to the string
 *Return: returns the new node at the start of the chain
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int  len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (; str[len] != '\0'; len++)
		;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			head = &(*head)->next;
		(*head)->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
