#include "lists.h"
/**
 * get_nodeint_at_index - get the node a particular index of a list
 * @head: adress of first node
 * @index: index to find
 * Return: address of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count;

	count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
