#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stddef.h>

/**
 * struct token_t - token struct
 * @_token: pointer
 */
typedef struct token_t
{
	char *_token[50000];
} token_t;


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
} stack1_t;

/*stack1_t *head2;*/
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode.
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack1_t **stack, unsigned int line_number);
} instruction_t;




/**
 * struct var_t -  variables
 * @err_no: pointer
 * @filename: pointer
 * @mode: pointer
 * @fileDescriptor: ======
 * @var: struct
 * @head2: head
 */
typedef struct var_t
{
	int err_no;
	char *filename;
	char *mode;
	int fileDescriptor;
	token_t var;
	stack1_t *head2;

} var_t;
var_t variables;

void *_malloc(int size);
void (*select_opcode(char *op_code[]))(stack1_t **stack, unsigned int ln);
int validateOPCODE(char *op[]);
int validateOPCODEarg(char *op1[]);
void push_func(stack1_t **stack, unsigned int line_number);
stack1_t *mallocfirst(stack1_t *node, const int data);
void addnodetostackfront(stack1_t **head, const int n);
stack1_t *mallocend(stack1_t *node, const int data);
stack1_t *addnodetostackend(stack1_t **head, const int n);
void free_stack(stack1_t *head);
void pall_func(stack1_t **stack, unsigned int line_number);
void print_stack(const stack1_t  **h, unsigned int ln);
void *loadlinedata(int ln, char *file);
char **tokenize(char *line);
void *loadlinedatatolist(int ln, char *MONTY_FILE);
void pint_func(stack1_t **stack, unsigned int line_number);
void freedata(char ***data);
void printtopstack(const stack1_t **h, unsigned int ln);
void popstackitem(stack1_t **head, unsigned int line_number);
void pop_func(stack1_t **stack, unsigned int line_number);
void swaptoptwostack(stack1_t **head, unsigned int ln);
void swap_func(stack1_t **stack, unsigned int line_number);
void addtwoAndReplace(stack1_t **head, unsigned int ln);
void add_func(stack1_t **stack, unsigned int line_number);
void nopdonothing(stack1_t **head, unsigned int ln);
void nop_func(stack1_t **stack, unsigned int line_number);
void sub_func(stack1_t **stack, unsigned int line_number);
void subtwoAndReplace(stack1_t **head, unsigned int ln);
void divtwoAndReplace(stack1_t **head, unsigned int ln);
void div_func(stack1_t **stack, unsigned int line_number);
void multwoAndReplace(stack1_t **head, unsigned int ln);
void mul_func(stack1_t **stack, unsigned int line_number);
void mod_func(stack1_t **stack, unsigned int line_number);
void modtwoAndReplace(stack1_t **head, unsigned int ln);
void pchar_func(stack1_t **stack, unsigned int line_number);
void pchartopstack(const stack1_t **h, unsigned int ln);
void pstrtopstack(const stack1_t **h, unsigned int ln);
void pstr_func(stack1_t **head, unsigned int ln);
void rotltopstack(stack1_t **head, unsigned int ln);
void rotl_func(stack1_t **stack, unsigned int line_number);
void rotr_func(stack1_t **stack, unsigned int line_number);
void rotrtopstack(stack1_t **head, unsigned int ln);
void queue_func(stack1_t **stack, unsigned int line_number);
void stack_func(stack1_t **stack, unsigned int line_number);
void updatetostackmode(stack1_t **head, unsigned int ln);
void updatetoqueuemode(stack1_t **head, unsigned int ln);
stack1_t *createNode(int data);
stack1_t *createNode(int data);
stack1_t *createNodesub(int data);
stack1_t *createNodediv(int data);
stack1_t *createNodemul(int data);
stack1_t *createNodemod(int data);
int hasLetter(char *token);
void free_stack(stack1_t *head);
int checkFileExtension(const char *filename, const char *extension);
void exitHandler(void);
void checkfile(char *filename);

#endif
