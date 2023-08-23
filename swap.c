#include "monty.h"

/*
 * swap - swaps the top two elements of the stack
 * @stack - Head/Top of the stack
 * @line_number - Line of error occurence
 * 
 * Return: Nothing
*/
void swap(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL || (*stack)->next == NULL) {
        fprintf(stderr, "L%d: Failed to swap a shot stack!\n", line_number);
        exit(EXIT_FAILURE);
    }
    
    int temp_value = (*stack)-> n;
    (*stack) -> n = (*stack)-> next-> n;
    (*stack) -> next -> n = temp_value;
}