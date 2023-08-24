#include "monty.h"

/*
 * push - Adding a new node at the begining of the stack
 * @stack - Head stack
 * @param - Value added on the stack
 * 
 * Return - Nothing
*/

void push(stack_t **stack, unsigned int param){
    stack_t *new_node = NULL;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    fprintf(stderr, "L%d: Push to stack failed!\n");
    exit(EXIT_FAILURE);



    new_node -> n = param;
    if (*stack){
        new_node -> next = *stack;
        new_node -> prev = (*stack) -> prev;
        (*stack) -> prev = new_node;
        *stack = new_node;
        return;
    }

    new_node -> next = *stack;
    new_node -> prev = NULL;
    *stack = new_node;
}

/*
 * push_queue - Adds a new node at the end of stack
 * @stack - Head of stack
 * @param - Value added to the stack 
 * 
 * Return - Nothing
*/
void push_queue(stack_t **stack, unsigned int param){
    stack_t *current = NULL, *new_node = NULL;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    fprintf(stderr, "L%d: Add new node Fail!\n");
    exit(EXIT_FAILURE);


        new_node -> n = param;
        if (*stack){
            current = *stack;
            while (current -> next != NULL){
                current = current -> next;
            }
            new_node -> next = NULL;
            new_node -> prev = current;
            current -> next = new_node;
            return;
        }
        new_node -> next = *stack;
        new_node -> prev = NULL;
        *stack = new_node;
}