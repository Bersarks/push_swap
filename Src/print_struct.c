#include "../Lib/push_swap.h"

void	print_b_struct(t_b_stack *b_stack)
{
	while (b_stack)
	{
		printf("B Value: %d Index: %d\n",b_stack->value, b_stack->index);
		b_stack = b_stack->next;
	}
}

void	print_a_struct(t_a_stack *a_stack)
{
	while (a_stack)
	{
		printf("A Value: %d Index: %d\n",a_stack->value, a_stack->index);
		a_stack = a_stack->next;
	}
}
