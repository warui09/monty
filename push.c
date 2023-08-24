#include "monty.h"

/**
 * push - pushes an element on to the stack
 * @stack: stack to work with
 * @line_number: used to show where errors arise
 *
 * Return: nothing
 *
*/

void push(stack_t **stack, unsigned int line_number)
{
	char *argument;
	int value;
	stack_t *new_node;

	argument = strtok(NULL, " \t\n");
	if (!argument)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(argument);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
