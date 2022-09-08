#include "monty.h"

/**
 * addHandler - handles the nop opcode
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */
void addHandler(stack_t **stack, unsigned int line_number)
{
	unsigned int length = 0;
	stack_t *p = *stack;

	for (; p != NULL; p = p->next)
		length++;
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_entire_arr(argv);
		if (*stack != NULL)
			free_stack(*stack);
		exit(EXIT_FAILURE);
	}
i	(*stack)->next->n += (*stack)->n;
	delete_node_at_index(stack, 0);
}

/**
 * nopHandler - handles the nop opcode
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */
void nopHandler(stack_t **stack, unsigned int line_number)
{
	stack = stack;
	line_number = line_number;
}
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
