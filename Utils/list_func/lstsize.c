#include "../../Lib/push_swap.h"

int	lstsize(t_stack *lst)
{
	t_stack	*temp;
	size_t	i;

	temp = lst;
	i = 0;
	if (!lst || !temp)
		return (0);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
