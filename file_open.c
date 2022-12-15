#include "monty.h"

/**
 * file_open - Opens a file
 * @s: Filename
 * Return: Pointer to the open file
 */
FILE *file_open(char *s)
{
	FILE *fp = fopen(s, "r");

	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", s);
		exit(EXIT_FAILURE);
	}
	return (fp);
}
