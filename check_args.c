#include "monty.h"
/**
  * check_args - Checks the number of command
  * line arguments.
  * @argc: Number of arguments passed to the
  * command line
*/

void check_args(int argc)
{
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
		return;
}
