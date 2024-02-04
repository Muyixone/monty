#include "monty.h"

/**
  * swap - Swaps the top two elements of the stack
  * @stack : Points to the stack structure
  * @line_num : Line from whence the function is called
*/

void swap(stack_t **stack, unsigned int line_num)
{
	stack_t *temp1, *temp2;

	(void) stack;
	if (args_params->stack_length < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_num);
		stream_exit();
		free_token();
		free_args();
		exit(EXIT_FAILURE);
	}

	temp1 = args_params->head;
	temp2 = temp1->next;
	temp1->next = temp2->next;

	if (temp1->next)
		temp1->next->prev = temp1;

	temp2->next = temp1;
	temp1->prev = temp2;
	temp2->prev = NULL;
	args_params->head = temp2;
}
