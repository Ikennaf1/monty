#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;

	/*if (head == NULL)
		create_stack();*/

	/*printf("Push function works\t%d\n", line_number);*/
	node = (stack_t *) malloc(sizeof(stack_t));
	if (node == NULL)
		handle_error(MALLOC_FAILED);
	node->prev = NULL;
	node->next = NULL;
	node->n = line_number;

	if (*stack == NULL)
	{
		*stack = node;
	}
	else
	{
		node->next = *stack;
		(*stack)->prev = node;
		*stack = node;
	}
}
