#include "lists.h"
/**
 * list_len - returns no of nodes of linked list
 * @h: linked lists
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
