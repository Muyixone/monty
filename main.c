#include "monty.h"

args *args_params = NULL;

/**
  * main - Program entry point.
  * @argc: Argument counter; which counts the number
  * of arguments passed to the command line.
  * @argv: Pointer to an array of strings passed to
  * the command line.
  *
  * Return: 0 success
*/

int main(int argc, char *argv[])
{
	size_t i = 0;

	(void) argv;

	check_args(argc);
	declare_args();
	get_stream(argv[1]);

	while (getline(&args_params->string_line, &i, args_params->stream) != -1)
	{
		args_params->string_line_num += 1;
		line_tokenization();
		get_instruction();
		run_instruction();
		free_token();
	}
		/* printf("%s", args_params->string_line); */
	stream_exit();
	free_args();

	return (0);
}
