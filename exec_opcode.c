#include "monty.h"

/**
 * exec_opcode - Handles the execution of opcodes
 * @opcode: The given opcode
 * @param: Parameter to the opcode
 * @line_number: The number to work with
 * Return: Status number
 */
unsigned int exec_opcode(char *opcode, char *param)
{
	int param_int;
	void (*op)(stack_t **, unsigned int);

	if (validate_opcode(opcode) == OPCODE_NOT_FOUND)
		return (OPCODE_NOT_FOUND);
	if (param != NULL)
	{
		if (strcmp(param, "0") == 0)
		{
			param_int = 0;
		}
		else
		{
			param_int = atoi(param);
			if (param_int == 0)
				return (NON_INT_ARGUMENT);
		}
	}
	else
	{
		param_int = 0;
	}

	op = run_opcode(opcode);
	if (op)
		op(&head, param_int);
	return (0);
}
