#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node a an index
 * @head: pointer to address of first element in a list
 * @idx: index to add element
 * @n: data to insert in node
 * Return:adress of newly added node or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *node1;
	unsigned int count;

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	count = 0;
	node1 = *head;

	while(node1)
	{
		if (count == idx - 1)
		{
			temp = node1->next;
			new_node->n = n;
			new_node->next = temp;
			node1->next = new_node;
			return (*head);
		}
	
		node1 = node1->next;
		count++;
	}
	free(new_node);

	return (NULL);
}
