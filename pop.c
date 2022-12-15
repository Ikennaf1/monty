#include "monty.h"

/**
 * pop - removes top element
 * Return: void
 */
void pop()
{
	stack_t *temp;

	if (head)
	{
		temp = head;
		head = head->next;
		head->prev = NULL;
		free(temp);
	}
	else
	{
		/**/
	}
}
