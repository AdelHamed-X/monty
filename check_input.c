#include "monty.h"

global_variables glob_var;

/**
 * check_input - checks if input text is valid
 * @argv: command line arguments
 */
FILE *check_input(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	glob_var.file = fopen(argv[1], "r");
	if (glob_var.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	return (glob_var.file);
}
