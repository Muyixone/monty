#include "monty.h"

/**
  * pall - Prints all the values on the stack, starting
  * from the top of the stack
  * @stack : Argument pointer to the stack
  * @line_num : Line number where the pall function is called
*/

void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	if (args_params->head == NULL)
		return;
	
	(void) line_num;
	(void) stack;

	temp = args_params->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
