#include "monty.h"

/*
 * pchar - Prints the char at the top of the stack
 * @stack: Head stack
 * @line_number: Line of error occurence
 * 
 * Return: Nothing
*/
void pchar(stack_t **stack, unsigned int line_number){
    if (*stack == NULL)
		fprintf(stderr, "L:%d can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
		fprintf(stderr, "L:%d can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
}