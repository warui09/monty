#include "monty.h"

/**
 * main - monty interpreter
 * @ac: argument count
 * @av: argument vector
 * Return: ALways 0
 */

int main(int ac, char **av)
{
	FILE *fp;
	
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	fp = fopen(av[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	
	interpret_file(fp);
	fclose(fp);
	
	return (EXIT_SUCCESS);
}
