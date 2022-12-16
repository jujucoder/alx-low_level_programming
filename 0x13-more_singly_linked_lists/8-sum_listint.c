#include "lists.h"

/**
 * sum_listint - sum all data in linked lists's nodes
 * @head: address of first element in list
 * Return: sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
