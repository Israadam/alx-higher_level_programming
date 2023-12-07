#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @w: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *w)
{
	int count;

	count = 0;

	if (w == NULL)
		return (count);

	while (w->prev != NULL)
		w = w->prev;

	while (w != NULL)
	{
		printf("%d\n", w->n);
		count++;
		w = w->next;
	}

	return (count);
}
