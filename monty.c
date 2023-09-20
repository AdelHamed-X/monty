#include "monty.h"

/**
 *
 *
 */
int main(argc, argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	parse_cmd(argv);
