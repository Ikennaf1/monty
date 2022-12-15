#include "monty.h"

/**
 * validate_opcode - Validates given opcode
 * @opcode: Given opcode
 * Return: 1 or 0
 */
unsigned int validate_opcode(char *opcode)
{
	char *opcodes[3] = {
		"push",
		"pop",
		NULL
	};
	unsigned int i;

	for (i = 0; opcodes[i] != NULL; i++)
	{
		if (strcmp(opcode, opcodes[i]) == 0)
			return (OPCODE_FOUND);
	}
	return (0);
}
