#include "monty.h"

/**
  * stream_exit - Exit the stream file
*/

void stream_exit(void)
{
	if (args_params->stream != NULL)
	{
		fclose(args_params->stream);
		args_params->stream = NULL;
	}
	else
	{
		return;
	}
}
