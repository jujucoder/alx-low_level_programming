#include "lists.h"
/**
 * add_node_end - add a node at the end of a linked list
 * @head: The character to print
 * @str: string for the new node
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *current;
	unsigned int count;

	for (count = 0; str[count]; count++)
	;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);

	last->str = strdup(str);
	if (last->str == NULL)
		return (NULL);

	last->len = count;
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = last;
	}
	return (*head);
}
