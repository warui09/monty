#include "monty.h"

/*
 * mod -  computes the rest of the division of the second 
 *        top element of the stack by the top element of the stack.
 * @stack: The head of stack
 * @line_number - The line of error occurence
 * 
 * Return: Nothing
*/
void mod(stack_t **stack, unsigned int line_number){
    stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		fprintf(stderr, "L%u can't mod, stack too short\n");
        exit(EXIT_FAILURE);

	a = temp -> n;

	if (a == 0)
		fprintf(stderr, "L%u division by zero\n");
        exit(EXIT_FAILURE);

	b = temp -> next -> n;
	temp -> next -> n = b % a;
	*stack = temp -> next;
	free(temp);
}