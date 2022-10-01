#include "../Lib/push_swap.h"

void	reverse_rotate_a(t_a_stack **source)
{
	t_stack	*temp;
	t_stack	*prev;

	lstadd_front(source, lstnew(lstlast((*source))->value),
		lstlast((*source))->index);
	temp = *source;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_b_stack **source)
{
	t_stack	*temp;
	t_stack	*prev;

	lstadd_front(source, lstnew(lstlast((*source))->value),
		lstlast((*source))->index);
	temp = *source;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
	write(1, "rra\n", 4);
}

void	reverse_rotate_ab(t_a_stack **a_stack, t_b_stack **b_stack)
{
	reverse_rotate_a(a_stack);
	reverse_rotate_b(b_stack);
	write(1, "rrr\n", 4);
}
