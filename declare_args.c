#include "monty.h"

/**
  * declare_args - Creates a space in the memory by
  * declaring a pointer to the global variable var_arg
*/

void declare_args(void)
{
	args_params = malloc(sizeof(struct var_arg));
	if (args_params == NULL)
		malloc_error();

	args_params->instruction = malloc(sizeof(instruction_t));
	if (args_params->instruction == NULL)
		malloc_error();

	args_params->stream = NULL;
	args_params->string_line = NULL;
	args_params->num_tokens = 0;
	args_params->string_line_num = 0;
}
