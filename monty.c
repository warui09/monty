#include "monty.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 *
*/

int main(int argc, char *argv[])
{
	FILE *file;
	int result;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	result = process_file(file);

	fclose(file);

	return (result);
}

