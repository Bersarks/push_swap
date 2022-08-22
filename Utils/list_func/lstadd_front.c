#include "../../Lib/push_swap.h"

void	lstadd_front(t_stack **lst, t_stack *new, int index)
{

	if (!new)
		return ;
	new->index = index;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
