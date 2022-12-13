#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets first node to null
 * @head: pointer to adresss of pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;



	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}



	
}
