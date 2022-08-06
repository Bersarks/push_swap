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

#endif