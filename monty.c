#include "monty.h"

global_variables vglo;
/**
 * start_glob_var - initializes all global variables
 */
void start_glob_var(FILE *file)
{
	vglo.buff = NULL;
	vglo.file = file;
}

/**
 * main - Entry Point
 *
 */
int main(int argc, char *argv[])
{
	FILE *file;
	int i = 0, bytes_read, line_number = 1;
	size_t buff_size;
	char *buff = NULL, **token_arr;

	file = check_input(argc, argv);

	bytes_read = getline(&buff, &buff_size, file);

	printf("buff is: %s\n", buff);

	while (bytes_read != -1)
	{
		token_arr = tokenizer(buff, bytes_read);
		
		while (token_arr[i] != NULL)
		{
			printf("token %i: %s\n", i, token_arr[i]); 
			i++;
		}

		bytes_read = getline(&buff, &buff_size, file);
		line_number++;
	}
	return 0;
}
