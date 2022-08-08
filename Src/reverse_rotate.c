#include "../Lib/push_swap.h"

void	reverse_rotate(t_stack **source)
{
	t_stack	*temp;

	lstadd_front(source, lstnew(lstlast((*source))->value));
	temp = (*source);
	while ((*source))
	{
		
	}
}