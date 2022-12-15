#include "monty.h"

/**
 * handle_error - Handles errors
 * @error: The error code
 * Return: Void
 */
void handle_error(unsigned int error)
{
	switch (error)
	{
		case MALLOC_FAILED:
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
			break;
		default:
			exit(EXIT_FAILURE);
	}
}
