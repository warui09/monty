#include "monty.h"

/*
 * mul - multiplies the second top element of the stack with the top element of the stack.
 * @stack: The Head of stack
 * @line_number - The line of error occurence
 * 
 * Return: Nothing
*/
void mul(stack_t **stack, unsigned int line_number){
    stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		fprintf(stderr, "L%d, can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);

	a = temp -> n;
	b = temp -> next -> n;
	temp-> next -> n = b * a;
	*stack = temp -> next;
	free(temp);
}