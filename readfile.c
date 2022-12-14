#include "monty.h"

/**
 * readfile - Reads the input file
 * @file: The given file name
 * Return: Void
 */
void readfile(char *file)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;
	short int i;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fp)) != -1)
	{
		args = parseline(line);
		for (i = 0; args[i]; i++)
			printf("%s\t", args[i]);
		printf("\n");
	}

	free(args);

	fclose(fp);
	if (line)
		free(line);
	exit(EXIT_SUCCESS);
}
