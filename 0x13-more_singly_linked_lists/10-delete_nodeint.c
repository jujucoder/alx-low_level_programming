#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *cur, *next;

	count = 0;
	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		temp = NULL;
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		temp = temp->next;
	}
	cur = temp->next;
	next = cur->next;
	temp = next;
	cur = NULL;
	return (1);
}
