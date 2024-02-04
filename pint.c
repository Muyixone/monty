#include "monty.h"

/**
  * pint - Prints the value at the top of the stack,
  * followed by a new line
  * @stack : Pointer to stack structure
  * @line_num : Where the function is called
*/

void pint(stack_t **stack, unsigned int line_num)
{
	(void) stack;
	if (args_params->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_num);
		stream_exit();
		free_token();
		free_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", args_params->head->n);
}
