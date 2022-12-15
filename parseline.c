#include "monty.h"

/**
 * parseline - Parses given string to desired output
 * @line: Given string
 * Return: Array of strings
 */
char **parseline(char *line)
{
	char *delim = "\t\n ";
	char *tok;
	char **token;
	unsigned int i;

	if (line == NULL)
		exit(EXIT_FAILURE);

	token = (char **) malloc(sizeof(char *) * ARGMAX);
	if (token == NULL)
		exit(EXIT_FAILURE);
	tok = strtok(line, delim);
	for (i = 0; (tok != NULL) && (i < ARGMAX); i++)
	{
		token[i] = tok;
		tok = strtok(NULL, delim);
	}

	return (token);
}
