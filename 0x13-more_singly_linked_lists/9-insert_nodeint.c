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
	listint_t *new_node, *temp;
	unsigned int count;

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	count = 0;
	new_node->n = n;
	temp = *head;


		if (idx == 0)
		{
			new_node->next = temp;
			*head = new_node;
			return (new_node);
		}


		for (count = 0; count < (idx - 1); count++)
		{
			if  (temp == NULL || temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}

		new_node->next = temp->next;
		temp->next = new_node;

		return (new_node);
}
