#include "../Lib/push_swap.h"

void	swap(t_stack *lst)
{
	int	temp;

	temp = lst->value;
	lst->value = lst->next->value;
	lst->next->value = temp;
}

void	swap_ab(t_stack *first_lst, t_stack *second_lst)
{
	swap(first_lst);
	swap(second_lst);
}
