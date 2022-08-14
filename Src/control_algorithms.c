#include "../Lib/push_swap.h"

int	in_line(t_stack *source, int count)
{
	int	temp;
	int	temp_2;

	temp = 1;
	temp_2 = count;
	while (count && source->next)
	{
		if (source->value < source->next->value)
			temp++;
		source = source->next;
		count--;
	}
	if (temp == temp_2)
		exit(EXIT_SUCCESS);
	return (1);
}

int	duplicate_arguments(char **content)
{
	int	x;
	int	y;

	y = 1;
	while (content[y])
	{
		x = y + 1;
		while (content[x])
		{
			if (ft_strcmp(content[y], content[x]) == 0)
				error_message("There are repeated arguments!\n");
			else
				x++;
		}
		y++;
	}
	return (1);
}

int	content_control(char **content)
{
	int	x;
	int	y;

	y = 1;
	while(content[y])
	{
		x = 0;
		while (content[y][x])
		{
			if (content[y][x] == ' ')
				x++;
			if (!(content[y][x] >= '0' && content[y][x] <= '9'))
				error_message("There are foreign characters!\n");
			x++;
		}
		y++;
	}
	return (1);
}
