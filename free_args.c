#include "monty.h"

/**
  * free_args - Frees dynamically allocated memory to arguments
*/

void free_args(void)
{
	if (args_params == NULL)
		return;

	if (args_params->instruction)
	{
		free(args_params->instruction);
		args_params->instruction = NULL;
	}

	free_top();

	if (args_params->string_line)
	{
		free(args_params->string_line);
		args_params->string_line = NULL;
	}

	free(args_params);
}

/**
  * free_top- Frees the top/head pointer in the stack
*/

void free_top(void)
{
	if (args_params->head)
		free_stack(args_params->head);

	args_params->head = NULL;
}


/**
  * free_stack- Frees the nodes in a stack
  * @top: The first node in a double linked list
*/

void free_stack(stack_t *top)
{
	if (top == NULL)
		return;

	if (top->next != NULL)
		free_stack(top->next);

	free(top);
}
