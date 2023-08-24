#include "monty.h"

/*
 * pop - Removes the top element of the stack
 * @stack: Head ofthe stack
 * @line_number: Line of error occurence
 * 
 * Return: Nothing
*/
void pop(stack_t **stack, unsigned int line_number){
    if (*stack == NULL){
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *stack;
    *stack = (*stack) -> next;
    free(temp);
}