#include "monty.h"


/**
  * pop - Removes the top element of the stack
  * @stack : Points to the stack struct
  * @line_num : Line where the pop function is called
*/

void pop(stack_t **stack, unsigned int line_num)
{
	(void) stack;
	if (args_params->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_num);
		stream_exit();
		free_token();
		free_args();
		exit(EXIT_FAILURE);
	}

	del_node();
	args_params->stack_length -= 1;
}

/**
  * del_node - Deletes top/head node
*/

void del_node(void)
{
	stack_t *temp;

	temp = args_params->head;
	args_params->head = temp->next;
	free(temp);
}
