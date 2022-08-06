#include "../../Lib/push_swap.h"

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*swap;

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
