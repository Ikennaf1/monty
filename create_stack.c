#include "monty.h"

/**
 * create_stack - Creates a stack
 * Return: Created stack
 */
stack_t **create_stack(void)
{
	stack_t **stack = (stack_t **) malloc(sizeof(stack_t **));

	if (stack == NULL)
		handle_error(MALLOC_FAILED);
	head = *stack;

	return (&head);
}
