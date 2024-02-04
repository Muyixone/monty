#include "monty.h"
/**
  * line_tokenization - tokenizes each line that is read
*/

void line_tokenization(void)
{
	int i = 0;
	char *token_local = NULL;
	char *line_copy = NULL;

	line_copy = malloc(sizeof(char) * (strlen(args_params->string_line) + 1));
	strcpy(line_copy, args_params->string_line);
	args_params->num_token = 0;
	token_local = strtok(line_copy, " \n");
	while (token_local)
	{
		args_params->num_token += 1;
		token_local = strtok(NULL, " \n");
	}

	args_params->token = malloc(sizeof(char *) * (args_params->num_token + 1));
	strcpy(line_copy, args_params->string_line);
	token_local = strtok(line_copy, " \n");
	while (token_local)
	{
		args_params->token[i] = malloc(sizeof(char) * (strlen(token_local) + 1));
		if (args_params->token[i] == NULL)
			malloc_error();
		strcpy(args_params->token[i], token_local);
		token_local = strtok(NULL, " \n");
		i++;
	}
	args_params->token[i] = NULL;
	free(line_copy);
}

/**
  * free_token - Frees all dynamically allocated memory of the token
*/

void free_token(void)
{
	int i = 0;

	if (args_params->token == NULL)
		return;

	while (args_params->token[i])
	{
		free(args_params->token[i]);
		i++;
	}

	free(args_params->token);
	args_params->token = NULL;
}
