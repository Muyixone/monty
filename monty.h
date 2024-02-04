#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
*/

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
  * struct var_arg - variable stream
  * @string_line : Readable strings from each line of stream
  * @stream : Pointer to a File
  * Description: A struct of global variable that will be accessible
  * by various functions and also dynamically allocated memory
*/
typedef struct var_arg
{
	char *string_line;
	FILE *stream;
} args;

extern args *args_params;

void check_args(int argc);
void declare_args(void);
void stream_fail_error(char *file_name);
void get_stream(char *file_name);

#endif /* MONTY_H */
