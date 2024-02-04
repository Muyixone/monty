#include "monty.h"

/**
  * stream_fail_error - Outputs the error when streaming fails
  * @file_name: Name of file unable to be streamed
*/

void stream_fail_error(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	/*free_args();*/
	exit(EXIT_FAILURE);
}

/**
  * get_stream - Get stream to be read from a file
  * @file_name: Name of file to be read from
*/

void get_stream(char *file_name)
{
	int file_descriptor;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		stream_fail_error(file_name);

	args_params->stream = fdopen(file_descriptor, "r");

	if (args_params->stream == NULL)
	{
		close(file_descriptor);
		stream_fail_error(file_name);
	}
}
