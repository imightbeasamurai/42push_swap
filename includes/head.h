#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft.h"

// typedef struct s_list
// {
// 	int			data;
// 	struct s_list	*next;
// }	t_list;

/* checking input */
t_list		*check_input(int ac, char **av);
void		str_free(char **str);
void		check_duplicate(t_list *root);

/* instructions */ 
void	pb(t_list **rootA, t_list **rootB);
void	pa(t_list **rootA, t_list **rootB);
void	sa(t_list **rootA);
void	sb(t_list **rootB);
void	ss(t_list **rootA, t_list **rootB);
void	ra(t_list **rootA);
void	rb(t_list **rootB);
void	rr(t_list **rootA, t_list **rootB);
void	rra(t_list **rootA);
void	rrb(t_list **rootB);
void	rrr(t_list **rootA, t_list **rootB);

#endif