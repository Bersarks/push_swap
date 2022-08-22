#include "../../Lib/push_swap.h"

void	lstadd_front(t_stack **lst, t_stack *new, int index)
{

	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		new->index = index;
		return ;
	}
	new->next = *lst;
	new->index = index;
	*lst = new;
}
