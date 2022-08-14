#include "../Lib/push_swap.h"

static void	add_data_to_structure(t_stack **source, char **content)
{
	int	y;

	y = 1;
	while (content[y])
	{
		lstadd_back(source, ft_atoi(content[y]));
		(*source)->count++;
		y++;
	}
}

void	control_processor(t_a_stack **a_stack, t_b_stack **b_stack, char **argv, int count, int arg_size)
{
	char	**content;

	if (arg_size == 2)
	{
		content = ft_split(argv[1], ' ');
		if(content_control(content) && duplicate_arguments(content))
		{
			add_data_to_structure(a_stack, content);
			in_line((*a_stack), (*a_stack)->count);
		}
	}
	else if (arg_size > 2)
	{
		if(content_control(argv) && duplicate_arguments(argv))
		{
			add_data_to_structure(a_stack, argv);
			in_line((*a_stack), (*a_stack)->count);
		}
	}
	else
		error_message("Parameter not specified!\n");
}