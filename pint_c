#include "monty.h"

/*
 * pint - Prints the value at the top of the stack 
 *        Followed by a new line
 * @stack: Head of stack 
 * @line_number: Line of error occurence
 * 
 * Return: Nothing
*/

void pint(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL) {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack) -> n);
}

