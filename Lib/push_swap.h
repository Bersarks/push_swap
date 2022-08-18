#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"
# include "utils.h"
# include "list_func.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	swap_a(t_a_stack **source);
void	swap_b(t_b_stack **source);
void	swap_ab(t_a_stack **a_stack, t_b_stack **b_stack);

void	push_a(t_a_stack **destination, t_b_stack **source);
void	push_b(t_b_stack **destination, t_a_stack **source);

void	rotate_a(t_a_stack **source);
void	rotate_b(t_b_stack **source);
void	rotate_ab(t_a_stack **a_stack, t_b_stack **b_stack);

void	reverse_rotate_a(t_a_stack **source);
void	reverse_rotate_b(t_b_stack **source);
void	reverse_rotate_ab(t_a_stack **a_stack, t_b_stack **b_stack);

void	error_message(const char *error_message);
int		content_control(char **content);
int		in_line(t_stack *source, int count);
int		duplicate_arguments(char **content);
void	control_processor(t_a_stack **a_sk, char **av, int arg_size);
void	sort_trion(t_stack **content, int count);
int		control(t_a_stack *a_stack, t_b_stack *b_stack, int count);
void	sorting(t_a_stack **a_stack, t_b_stack **b_stack);

#endif