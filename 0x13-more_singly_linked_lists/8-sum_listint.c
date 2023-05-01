#include "lists.h"

/**
 * sum_listint - Calc the sum of all the
 *               data (n) of a listint_t list.
 * @head: Pointer to head of the listint_t list.
 *
 * Return: If list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
