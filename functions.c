#include "monty.h"

void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    /* Implement the push operation here*/
    /* Use the line_number parameter to track line numbers for error reporting*/
}

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    /*Implement the pall operation here*/
    /*Print the contents of the stack*/
}

/* Add more command functions here as needed*/

/**
 * get_opcode_func - retrieves the appropriate function pointer for an opcode
 * @opcode: the opcode string
 *
 * Return: function pointer corresponding to the opcode, or NULL if not found
 */
void (*get_opcode_func(char *opcode))(stack_t **, unsigned int)
{
    instruction_t instructions[] = {
        {"push", push},
        {"pall", pall},
        /*Add more opcode-function pairs here*/
        {NULL, NULL}
    };

    int i = 0;
    while (instructions[i].opcode)
    {
        if (strcmp(opcode, instructions[i].opcode) == 0)
            return instructions[i].f;
        i++;
    }

    return (NULL);
}
