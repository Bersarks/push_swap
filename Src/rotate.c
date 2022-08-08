#include "../Lib/push_swap.h"

void	rotate(t_stack **source)
{
	t_stack	*temp;

	lstadd_back(source, lstnew((*source)->value));
	temp = *source;
	*source = (*source)->next;
	free(temp);
}

void	rotate_ab(t_stack **first_s, t_stack **second_s)
{
	rotate(first_s);
	rotate(second_s);
}
