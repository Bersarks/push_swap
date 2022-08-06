#ifndef STACK_H
# define STACK_H

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
} t_a_stack, t_b_stack,	t_stack;

#endif