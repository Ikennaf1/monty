#include "monty.h"

/**
 * pint - Prints value at top of stack
 * Return: Void
 */
void pint()
{
	if (head)
	{
		printf("\n%d\n", head->n);
		
	}
}
