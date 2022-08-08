#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "stack.h"
# include "utils.h"
# include "list_func.h"
# include <unistd.h>
# include <stdlib.h>

void	swap(t_stack *lst);
void	swap_ab(t_stack *first_lst, t_stack *second_lst);

void	push(t_stack **destination, t_stack **source);

void	rotate(t_stack **source);
void	rotate_ab(t_stack **first_s, t_stack **second_s);

void	reverse_rotate(t_stack **source);

#endif