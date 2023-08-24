#include "monty.h"

/**
 * process_file - read the file and execute the commands
 * @file: file to read
 *
 * Return: Always 0
 *
*/

int process_file(FILE *file)
{
	char buffer[1024];
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *opcode;
	instruction_t *current_instruction;

	while (fgets(buffer, sizeof(buffer), file))
	{
		line_number++;
		opcode = strtok(buffer, " \t\n");
		if (!opcode || opcode[0] == '#')
			continue;

		current_instruction = instructions;
		while (current_instruction->opcode)
		{
			if (strcmp(current_instruction->opcode, opcode) == 0)
			{
				current_instruction->f(&stack, line_number);
				break;
			}
			current_instruction++;
		}
		if (!current_instruction->opcode)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n",
					line_number, opcode);
			return (EXIT_FAILURE);
		}
	}

	return (EXIT_SUCCESS);
}

