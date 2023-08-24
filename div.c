#include "monty.h"

/*
 * divide - Divides the second top element of the stack by the top element
 * @stack: Head of stack
 * @line_number: Line of error occurence
 * 
 * Return: Nothing
*/
void divide(stack_t **stack, unsigned int line_number){
    stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
	fprintf(stderr, "L%d: can't div, stack too short!\n");
    exit(EXIT_FAILURE);

	a = temp->n;

	if (a == 0)
	fprintf(stderr, "L%d: Division by zero\n");
    exit(EXIT_FAILURE);

	b = temp -> next -> n;
	temp -> next -> n = b / a;
	*stack = temp -> next;
	free(temp);
}