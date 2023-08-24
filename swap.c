#include "monty.h"

/*
 * swap - swaps the top two elements of the stack
 * @stack - Head/Top of the stack
 * @line_number - Line of error occurence
 * 
 * Return: Nothing
*/
void swap(stack_t **stack, unsigned int line_number) {
    	unsigned int length = 0, temp = 0;

	length = count_stack(*stack);

	if (length < 2)
		fprintf(stderr, "L%d: Fail to swap!\n", line_number);
        exit(EXIT_FAILURE);

	if (*stack)
	{
		temp = (*stack) -> n;
		(*stack) -> n = (*stack) -> next -> n;
		(*stack) -> next -> n = temp;
	}
}