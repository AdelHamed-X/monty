#include "monty.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: double pointer
  * @n: the element of a new node
  * Return: the address of the new node
  */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new = NULL;

	new = (stack_t *)malloc(sizeof(stack_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	if ((*head)->prev)
	{
		*head = (*head)->prev;
	}

	(*head)->prev = new;
	*head = new;

	return (new);
}
