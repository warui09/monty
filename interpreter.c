#include "monty.h"

void interpret_file(FILE *fp)
{
    char line[MAX_LINE_LENGTH];
    char opcode[MAX_LINE_LENGTH];
    int line_number = 0;
    void (*opcode_func)(stack_t **, unsigned int);

    while (fgets(line, sizeof(line), fp))
    {
        line_number++;
        parse_line(line);

        sscanf(line, "%s", opcode);

        opcode_func = get_opcode_func(opcode);
        if (opcode_func)
            opcode_func(NULL, line_number);
        else
            fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
    }
}
