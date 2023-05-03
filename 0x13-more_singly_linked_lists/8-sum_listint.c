#include "lists.h"

/**
 * sum_listint - The function that calc the sum of all data in listint_t list
 * @head: The first node in the linked list
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{

	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
