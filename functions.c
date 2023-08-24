#include "monty.h"

void push(stack_t **stack __attribute__((unused)), unsigned int line_number) {
    printf("push ");
    printf("%d\n", line_number);
}

void pall(stack_t **stack __attribute__((unused)), unsigned int line_number) {
    printf("pall ");
    printf("%d\n", line_number);
}

void pop(stack_t **stack __attribute__((unused)), unsigned int line_number) {
    printf("pop  ");
    printf("%d\n", line_number);
}
