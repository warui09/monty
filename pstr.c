#include "monty.h"

/*
 * pstr - Prints string at top of the stack followed by a new line
 * @stack: Head of the stack
 * @line_number: Line of error occurence
 * @curr: Current node
 * @n: The value
 * 
 * Return: Nothing
*/
void pstr(stack_t **stack, unsigned int line_number){
    stack_t *curr = *stack;
    (void) line_number;

    while (curr != NULL){
        if (curr -> n == 0 || curr -> n < 0 || curr -> n > 127)
        break;

        printf("%c", curr -> n);
        curr = curr -> next;
    }

    printf("\n");
}