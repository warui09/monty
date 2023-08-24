#include "monty.h"

/*
 * sub - Subtracts the top element of the stack from the second top element
 * @stack: Head of stack
 * @line_number - Line of error occurence
 * 
 * Return - Nothing
*/
void sub(stack_t **stack, unsigned int line_number){
    stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
	fprintf(stderr, "L%d: cant sub, stack too short\n");
    exit(EXIT_FAILURE);

	a = temp -> n;
	b = temp -> next -> n;
	temp -> next -> n = b - a;
	*stack = temp -> next;
	free(temp);
}