#include "monty.h"

/**
  * push - Pushes an element to the stack
  * @stack : A pointer argument to the stack structure
  * @line_num : The line where push is called
*/

void push(stack_t **stack, unsigned int line_num)
{
	if (args_params->num_token <= 1 || !(is_int(args_params->token[1])))
	{
		free_args();
		dprintf(2, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_error();

	(*stack)->next = (*stack)->prev = NULL;

	(*stack)->n = (int) atoi(args_params->token[1]);

	if (args_params->head != NULL)
	{
		(*stack)->next = args_params->head;
		args_params->head->prev = *stack;
	}

	args_params->head = *stack;
	args_params->stack_length += 1;
}


/**
  * is_int- Checks if the value passed is an integer
  * @val: String value passed
  *
  * Return: 1 if string value passed is an integer, 0 otherwise
*/

int is_int(char *val)
{
	int i = 0;

	while (val[i])
	{
		if (i == 0 && val[i] == '-' && val[i + 1])
		{
			i++;
			continue;
		}
		if (val[i] < '0' || val[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
