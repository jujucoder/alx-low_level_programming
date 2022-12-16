#include "lists.h"
/**
 * pop_listint - removes head of node
 * @head: pointer to adress of first element in list
 * Return: element of removed node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
