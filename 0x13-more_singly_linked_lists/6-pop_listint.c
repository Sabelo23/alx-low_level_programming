#include "lists.h"

/**
 * pop_listint - The function that deletes head node of a listint_t linked list
 * @head: Pointer that points to the first element in the linked list
 *
 * Return: The head node's data(n) and if link is empty returns 0
 */
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
