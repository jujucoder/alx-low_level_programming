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
	list_t *tail;
	list_t *node;

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
		return (NULL);
	tail->str = strdup(str);
	if (tail->str == NULL)
		return (NULL);
	tail->len = strlen(str);
	tail->next = NULL;
	node = *head;
	if (node == NULL)
	{
		node = tail;
		return node;
	}
	while (node->next != NULL)
		node = node->next;


	node->next = tail;

	return (tail);
}
