#include "monty.h"

/**
 * add - add elements of a stack
 * @stack: stack to work with
 * @line_number: used for debugging purposes
 * 
 * Return: nothing
 * 
*/

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		stack_t *top = *stack;
		*stack = (*stack)->next;
		(*stack)->n += top->n;
		(*stack)->prev = NULL;
		free(top);
	}
	else
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
}
