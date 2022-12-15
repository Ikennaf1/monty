#include "monty.h"

/**
 * pall - Prints all values on the stack
 * Return: Void
 */
void pall()
{
	stack_t *temp;
	if (head)
	{
		temp = head;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
