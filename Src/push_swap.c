#include "../Lib/push_swap.h"

int	main(int ac, char **av)
{
	t_a_stack	*a_node;

	a_node = NULL;
	control_processor(&a_node, av, ac);
	if (a_node->count == 3)
		sort_trion(&a_node, a_node->count);
	while (a_node)
	{
		printf("%d ", a_node->value);
		a_node = a_node->next;
	}
	printf("\n");
}
