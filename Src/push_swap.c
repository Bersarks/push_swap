#include "../Lib/push_swap.h"

int	main(int ac, char **av)
{
	t_a_stack	*a_node;
	t_b_stack	*b_node;

	a_node = NULL;
	b_node = NULL;
	control_processor(&a_node, av, ac);
if (lstsize(a_node) == 2 && a_node->value > a_node->next->value)
	{
		rotate_a(&a_node, 0);
		exit(EXIT_SUCCESS);
	}
	if (lstsize(a_node) == 3)
		sort_trion(&a_node, lstsize(a_node), 3);
	if (lstsize(a_node) <= 5)
		kvintett(&a_node, &b_node);
	if (lstsize(a_node) == 100 || lstsize(a_node) == 500)
	{
		a_node = index_sort(a_node);
		radix_sort(&a_node, &b_node);
	}
	else
		easy_sort(&a_node, &b_node);
}
