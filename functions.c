#include "monty.h"

/**
 * push - push int onto a stack
 * @stack: stack to change
 * @line_number: variable to track line number for error reporting
 * Return: nothing
 */

void push(stack_t **stack __attribute__((unused)), unsigned int line_number)
{
	printf("push ");
	printf("%d\n", line_number);
}

/**
 * pall - print all elements of a stack
 * @stack: stack to change
 * @line_number: variable to track line number for error reporting
 * Return: nothing
 */

void pall(stack_t **stack __attribute__((unused)), unsigned int line_number)
{
	printf("pall ");
	printf("%d\n", line_number);
}

/**
 * pop - remove last element of a stack
 * @stack: stack to change
 * @line_number: variable to track line number for error reporting
 * Return: nothing
 */
void pop(stack_t **stack __attribute__((unused)), unsigned int line_number)
{
	printf("pop  ");
	printf("%d\n", line_number);
}
