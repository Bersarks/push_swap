#include "../Lib/push_swap.h"

void	push(t_stack **destination, t_stack **source)
{
	t_stack	*temp;

	if (lstsize(*source) > 0)
	{
		lstadd_front(destination, lstnew((*source)->value));
		temp = *source;
		*source = (*source)->next;
		free(temp);
	}
}