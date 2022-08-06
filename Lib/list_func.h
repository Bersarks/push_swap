#ifndef LIST_FUNC_H
# define LIST_FUNC_H

t_stack		*lstnew(int content);
t_stack		*lstlast(t_stack *lst);

void		lstadd_back(t_stack **lst, t_stack *new);
void		lstadd_front(t_stack **lst, t_stack *new);

int			lstsize(t_stack *lst);

#endif