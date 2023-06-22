#include "monty.h"

/**
 * f_pstr - prints a string starting at the top of the stack,
 * followed by a new
 * @stack: pointer to head node of stack
 * @line_number: Bytcode file line counter
*/

void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp && tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");

	void(line_number);
}
