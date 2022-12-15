#include "monty.h"

/**
 * swap - Swap first and second values ont he stack
 * Return: Void
 */
void swap()
{
	int temp;

	if (head && head->next)
	{
		temp = head->n;
		head->n = head->next->n;
		head->next->n = temp;
	}
}
