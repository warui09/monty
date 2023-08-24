#include "monty.h"

/**
 * pall - print all the elemnts of the stack
 * @stack: stack to work with
 * @line_number: used for tracking where errors arise
 *
 * Return: nothing
 *
*/

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

