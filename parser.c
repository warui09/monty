#include "monty.h"

int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

void parse_line(char *line)
{
	char *write_ptr = line;
	char *read_ptr = line;
	int word_count = 0;
	int in_word = 0;
	
	while (*read_ptr != '\0')
	{
		if (!is_whitespace(*read_ptr))
		{
			if (!in_word)
			{
				if (word_count > 0)
				{
					*write_ptr = ' ';
					write_ptr++;
				}
				
				in_word = 1;
				
				word_count++;
				
				if (word_count > 2)
					break;
			}
			
			*write_ptr = *read_ptr;
			write_ptr++;
		}
		else
		{
			in_word = 0;
		}
		read_ptr++;
	}
	
	*write_ptr = '\0';
}
