#include "monty.h"

/**
 * pop - remove and element from the stack
 * @stack: stack to work with
 * @line_number: used for debugging purposes
 *
 * Return: nothing
 *
*/

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		stack_t *top = *stack;
		*stack = top->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(top);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}

