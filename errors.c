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
