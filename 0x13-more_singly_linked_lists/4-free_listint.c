#include "lists.h"

/**
 * free_listint - function name frees a linked list
 * @head: function parameter listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
{
	temp = head->next;
	free(head);
	head = temp;
	}
}
