#include "monty.h"

/**
 * main - entry point for the app
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0
 *
 */

int main(int ac, char **av)
{
	FILE *file_to_read;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_to_read = fopen("av[1]", "r");
	if (!file_to_read)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}


	printf("%s\n", av[1]);

	return (EXIT_SUCCESS);
}
