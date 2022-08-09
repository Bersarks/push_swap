#include "../Lib/push_swap.h"

void	push_a(t_a_stack **destination, t_b_stack **source)
{
	t_stack	*temp;

	if (lstsize(*source) > 0)
	{
		lstadd_front(destination, lstnew((*source)->value));
		temp = *source;
		*source = (*source)->next;
		free(temp);
		write(1, "pa\n", 3);
	}
}

void	push_b(t_b_stack **destination, t_a_stack **source)
{
	t_stack	*temp;

	if (lstsize(*source) > 0)
	{
		lstadd_front(destination, lstnew((*source)->value));
		temp = *source;
		*source = (*source)->next;
		free(temp);
		write(1, "pb\n", 3);
	}
}
