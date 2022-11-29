#include "lists.h"

/**
 * add_nodeint - add node to beggining of linked list
 * @head: pointer to address of first node pointer
 * @n: int
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = temp;

	return (*head);
}
