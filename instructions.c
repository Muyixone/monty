#include "monty.h"

/**
  * get_instruction - Assigns instruction given via the standard input
*/

void get_instruction(void)
{
	int i;
	instruction_t instructions[] = {
		{"push", &push},
		{NULL, NULL}
	};

	if (args_params->num_token == 0)
		return;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, args_params->token[0]) == 0)
		{
			args_params->instruction->opcode = instructions[i].opcode;
			args_params->instruction->f = instructions[i].f;
			return;
		}
	}

	instruction_not_valid();
}

/**
  * run_instruction - runs instructions
*/

void run_instruction(void)
{
	stack_t *stack = NULL;

	if (args_params->num_tokens == 0)
		return;
	
	args_params->instruction->f(&stack, args_params->string_line_num);
}
