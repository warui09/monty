#include "monty.h"

/*
 * add - Adds the top two elements of the stack
 * @stack: The head of the stack
 * @line_number - Line of error occurence
 * 
 * Return - Nothing
*/
void add(stack_t **stack, unsigned int line_number){
    stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		fprintf(stderr, "L%d: Fail to add to stack!\n", line_number);
        exit(EXIT_FAILURE);

	a = temp->n;
	b = temp->next->n;
	temp->next->n = a + b;
	*stack = temp->next;
	free(temp);
}