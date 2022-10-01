#include "../Lib/push_swap.h"

void	swap_a(t_a_stack **source)
{
	t_a_stack	*temp;

	if (!(*source))
		return ;
	temp = *source;
	*source = (*source)->next;
	temp->next = (*source)->next;
	(*source)->next = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_b_stack **source)
{
	t_b_stack	*temp;

	if (!(*source))
		return ;
	temp = *source;
	*source = (*source)->next;
	temp->next = (*source)->next;
	(*source)->next = temp;
	write(1, "sb\n", 3);
}

void	swap_ab(t_a_stack **a_stack, t_b_stack **b_stack)
{
	swap_a(a_stack);
	swap_b(b_stack);
	write(1, "ss\n", 3);
}
