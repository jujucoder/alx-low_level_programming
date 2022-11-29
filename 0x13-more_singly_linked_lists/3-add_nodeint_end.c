#include "lists.h"
/**
 * add_nodeint_end -add node to end of list
 * @head:pointer to first node in list
 * @n: integer
 * Return: pointer to list or NULL(error)
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (new == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp)
		{
			temp = temp->next;
		}
		temp = new;
	}
	return (*head);
}
