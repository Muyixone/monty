#include "monty.h"

/**
  * add - Adds the top two elements of the stack
  * @stack : A pointer to the struct
  * @line_num : The line that the function is called
*/

void add(stack_t **stack, unsigned int line_num)
{
	stack_t *temp1, *temp2;

	(void) stack;

	if (args_params->stack_length < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_num);
		stream_exit();
		free_token();
		free_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args_params->head;
	temp2 = temp1->next;

	temp2->n += temp1->n;
	del_node();

	args_params->stack_length -= 1;
}
