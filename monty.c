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
	stack_t stack;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (!stack)
		printf("haha\n");

	return (EXIT_SUCCESS);
}
