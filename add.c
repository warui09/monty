#include "monty.h"

/*
 * add - Adds the top two elements of the stack
 * @stack: The head of the stack
 * @line_number - Line of error occurence
 * 
 * Return - Nothing
*/
void add(stack_t **stack, unsigned int line_number){
    	unsigned int length = 0, temp = 0;

	length = count_stack(*stack);

	if (length < 2)
		fprintf(stderr, "L%d: Failed to add stack!\n", line_number);
        exit(EXIT_FAILURE);

	if (*stack)
	{
		temp = (*stack) -> n;
		(*stack) -> n = (*stack) -> next -> n;
		(*stack) -> next -> n = temp;
	}
}