#include "monty.h"

/**
 * f_add - adds top two elements of the stack.
 * @stack: stack head
 * @line_number: counter
*/

void f_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(unsigned int line_number, "add"));
		return;
	}
	(*stack)->next->next->n += (*stack)->next->n;
	f_pop(stack, line_number);
}
