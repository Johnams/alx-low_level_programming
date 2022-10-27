#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *fst;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	fst = *head;
	*head = fst->next;
	n = fst->n;
	free(fst);
	return (n);
}
