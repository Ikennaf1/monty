#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARGMAX 2

/* OK, good status */
#define STATUS_OK 200
#define OPCODE_FOUND 201

/* Not found */
#define OPCODE_NOT_FOUND 404

/* Errors */
#define NON_INT_ARGUMENT 500
#define MALLOC_FAILED 501

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
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
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;

void (*run_opcode(char *s))(stack_t **, unsigned int);
FILE *file_open(char *s);
char **parseline(char *line);
unsigned int exec_opcode(char *opcode, char *param);
unsigned int validate_opcode(char *opcode);
void push(stack_t **, unsigned int);
stack_t **create_stack(void);
void handle_error(unsigned int error);
void pall();
void pint();
void pop();
void swap();
void add();
void nop();

#endif /* _MONTY_H */
