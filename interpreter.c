#include "monty.h"

/**
 * interpret_file - read the file and interpret it
 * @fp: file pointer
 * Return: nothing
 */

void interpret_file(FILE *fp)
{
	char opcode[MAX_LINE_LENGTH];
	char line[MAX_LINE_LENGTH];
	int line_number = 0;
	int i = 0;
	
	while (fgets(line, sizeof(line), fp))
	{
		line_number++;
		sscanf(line, "%s", opcode);
		parse_line(line);
		
		i = 0;
		
		while (instructions[i].opcode)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(NULL, line_number);
				break;
			}
			
			i++;
		}
		if (!instructions[i].opcode)
			fprintf(stderr, "L%d: unknown instruction %s\n",
					line_number, opcode);
	}
}

