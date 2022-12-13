#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets first node to null
 * @head: pointer to adresss of pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *temp;

	h = *head;

	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

	*head = NULL;
}
