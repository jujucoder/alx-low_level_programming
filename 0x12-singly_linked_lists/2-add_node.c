#include "lists.h"
/**
 * add_node - add node to the beggining of a list
 * @head: pointer to address of first node
 * @str: string to insert in node
 * Return: pointer to first element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int count;

	temp = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->str = strdup(str);
	if ((*head)->str == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0';  count++)
	;
	(*head)->len = strlen(str);
	(*head)->next = temp;

	return (*head);
}
