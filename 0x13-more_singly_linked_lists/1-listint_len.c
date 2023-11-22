#include "lists.h"

/**
 * listint_len - function name returns the number of elements in a linked lists
 * @h: function parameter linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
{
	num++;
	h = h->next;
}

	return (num);
}

