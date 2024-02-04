#include "monty.h"

/**
  * declare_args - Creates a space in the memory by
  * declaring a pointer to the global variable var_arg
*/

void declare_args(void)
{
	args_params = malloc(sizeof(struct var_arg));
	if (args_params == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free(args_params);
		exit(EXIT_FAILURE);
	}

	args_params->stream = NULL;
	args_params->string_line = NULL;
}
