#include "monty.h"

/**
 * add - Adds the two top elements
 * Return: Void
 */
void add()
{
	int sum = 0;

	if (head && head->next)
	{
		/*sum += head->n;
		pop();
		sum += head->n;
		pop();*/
		sum = head->n + head->next->n;
		pop();
		pop();
		printf("%d\n", sum);
	}
}
