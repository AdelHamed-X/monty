#include "monty.h"

/**
 *
 *
 */
int main(argc, argv[])
{
	FILE *file;
	char **token_arr;
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open_file(argv);
	
	token_arr = parse_file_instr(file);

	for (i = 0; (*token_arr) != NULL; i++)
	{
		printf("%s\n", token_arr[i]);
	}
}
