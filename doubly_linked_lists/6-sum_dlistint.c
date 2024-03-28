#include"lists.h"
/**
 *sum_dlistint - add every n inside every node
 *@head: pointer to the start of the chain of nodes
 *Return: retutn the number equals of the addition of every node n
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
