#include "../../Lib/push_swap.h"

void	lstadd_back(t_stack **lst, t_stack *new, int index)
{
	t_stack	*swap;

	new->index = index;
	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			swap = lstlast(*lst);
			swap->next = new;
		}
	}
}
