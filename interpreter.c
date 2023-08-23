#include "monty.h"

void interpret_file(FILE *fp)
{
    char line[MAX_LINE_LENGTH];
    int line_number = 0;

    while (fgets(line, sizeof(line), fp))
    {
        line_number++;
	printf("%s", line);
    }
}
