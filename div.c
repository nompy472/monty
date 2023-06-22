#include "monty.h"
/**
 * f_div - splits the top two elements of the stack.
 * @stack: pointer to head of linked list
 * @line_number: counter
*/
void f_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(unsigned int line_number, "div"));
		return;
	}
	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_nember));
		return;
	}
	(*stack)->next->next->n /= (*stack)->next->n;
	f_pop(stack, line_number);
}
