#include "../Lib/push_swap.h"

int	main(int ac, char **av)
{
	t_a_stack	*a_node;
	t_b_stack	*b_node;

	a_node = NULL;
	b_node = NULL;
	control_processor(&a_node, av, ac);
	if (a_node->index == 3)
		sort_trion(&a_node, a_node->index);
	if (a_node->index <= 5)
		kvintett(&a_node, &b_node);
	while (a_node)
	{
		printf("%d ", a_node->value);
		a_node = a_node->next;
	}
	printf("\n");
}
