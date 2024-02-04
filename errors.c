#include "monty.h"

/**
  * malloc_error - Throws an error message when malloc fails
*/


void malloc_error(void)
{
		dprintf(2, "Error: malloc failed\n");
		free(args_params);
		exit(EXIT_FAILURE);
}

/**
  * instruction_not_valid - Throws error when an instruction is not valid
*/

void instruction_not_valid(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", args_params->string_line_num,
			args_params->token[0]);
	stream_end();
	free_token();
	free_args();
	exit(EXIT_FAILURE);
}
