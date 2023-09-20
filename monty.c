#include "monty.h"

/**
 *
 *
 */
int main(argc, argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open_file(argv);
	
	parse_file_instr(file);
}
