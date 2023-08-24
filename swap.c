#include "monty.h"

/**
 * swap - swap elements of a stack
 * @stack: stack to work with
 * @line_number: used for debugging purposes
 *
 * Return: nothing
 *
*/

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		int temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
}
