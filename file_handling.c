#include "monty.h"

/**
 * open_file - opens a file
 * @argv: command line arguments
 * Return: a pointer to a file
 */
FILE *open_file(argv)
{
	FILE *file;

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}
	
	return (file);
}

/**
 * parse_file_instr - parses the file content
 * @file: a pointer to a file
 */
void parse_file_instr(FILE *file, int read_bytes)
{
	char *buffer;
	size_t buff_size;
	int read_bytes;

	read_bytes = getline(&buffer, &buff_size, file);
	if (read_bytes == 0)
	{
		exit(EXIT_FAILURE);
	}

	tokenizer(buffer, read_bytes);
}

/**
 *
 *
 */
char **tokenizer(char *buffer, int read_bytes)
{
	char *token, *buffer_cp;
	char **token_arr;

	token_arr = (char *)malloc(read_bytes * sizeof(char));
	if (token_arr == NULL)
	{
		free(token_arr);
		exit(EXIT_FAILURE);
	}

	token = strtok(buffer, " ");
	while (token)
	{
		token_arr[i] = (char *)
