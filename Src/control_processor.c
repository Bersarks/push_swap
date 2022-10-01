#include "../Lib/push_swap.h"

static void	add_index_to_structure(t_stack **source)
{
	t_stack	*temp;
	int		index;

	temp = *source;
	index = 0;
	while (temp)
	{
		temp->index = index;
		temp = temp->next;
		index++;
	}
}

static void	add_data_to_structure(t_stack **source, char **content, int split)
{
	int	y;

	if (split == 1)
	{
		y = 0;
		while (content[y])
		{
			lstadd_back(source, lstnew(ft_atoi(content[y])), 0);
			y++;
		}
		add_index_to_structure(source);
	}
	else
	{
		y = 1;
		while (content[y])
		{
			lstadd_back(source, lstnew(ft_atoi(content[y])), 0);
			y++;
		}
		add_index_to_structure(source);
	}
}

void	control_processor(t_a_stack **a_sk, char **av, int arg_size)
{
	char	**content;

	if (arg_size == 2)
	{
		content = ft_split(av[1], ' ');
		check_split(content);
		if (content_control(content) && duplicate_arguments(content))
		{
			add_data_to_structure(a_sk, content, 1);
			if (!in_line((*a_sk), lstsize(*a_sk), 0))
				exit(EXIT_SUCCESS);
		}
	}
	else if (arg_size > 2)
	{
		if (content_control(av) && duplicate_arguments(av))
		{
			add_data_to_structure(a_sk, av, 0);
			if (!in_line((*a_sk), lstsize(*a_sk), 0))
				exit(EXIT_SUCCESS);
		}
	}
	else
		error_message("Parameter not specified!\n");
}
