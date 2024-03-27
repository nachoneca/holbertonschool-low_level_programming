
#include"lists.h"
/**
 *free_list - free the node
 *@head: pointer to the stratr of the nodes chain
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
