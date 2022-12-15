#include "monty.h"

stack_t *head = NULL;

/**
 * main - Main entry point
 * @argc: Arg count
 * @argv: Arguments
 * Return: 1 or 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	FILE *fp;
	ssize_t read;
	size_t len = 0;
	char *line = NULL, **args;
	unsigned int line_number = 1, status = 0;

	fp = file_open(argv[1]);
	/*if (head == NULL)
		create_stack();*/

	while ((read = getline(&line, &len, fp)) != -1)
	{
		args = parseline(line);
		if (args && args[0])
		{
			if (args[0][0] == '#')
			{
				line_number++;
				continue;
			}
			status = exec_opcode(args[0], args[1] ? args[1] : NULL);
			if (status >= 300)
			{
				fclose(fp);
				/*handle_error*/
			}
		}
		line_number++;
	}
	free(args);
	return (0);
}
