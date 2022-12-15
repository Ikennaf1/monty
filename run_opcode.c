#include "monty.h"

/**
 * run_opcode - Select opcode to run
 * @s: The given string
 * Return: Void
 */
void (*run_opcode(char *s))(stack_t **stack, unsigned int)
{
	instruction_t select[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;

	while (select[i].opcode)
	{
		if (strcmp(select[i].opcode, s) == 0)
			return (select[i].f);
		i++;
	}
	return (NULL);
}
