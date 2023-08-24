#include "monty.h"

/*
 * pall - Prints all the vaalues of the stack
 *        starting from the top
 * @stack - Head of the stack
 * @line_number - Line on erorr occurence
 * 
 * Return - Nothing
*/
void pall(stack_t **stack, unsigned int line_number){
    stack_t *current = NULL;
    (void) line_number;

    if(*stack){
        current = *stack;
        while (current != NULL){
            printf("%u\n", current -> n);
            current = current -> next;
        }
    }
}