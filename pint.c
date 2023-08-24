#include "monty.h"

/**
 * pint - print the element at the top of the stack
 * @stack: stack to work with
 * @line_number: used for debugging purposes
 *
 * Return: nothing
 *
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
