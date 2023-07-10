/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:19:34 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/10 18:19:20 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft.h"

typedef struct var_s
{
    
}   e_var;


/* checking input */
t_list		*check_input(int ac, char **av, int i);
void		str_free(char **str);
void		check_duplicate(t_list *root);

/* instructions */
void		pb(t_list **rootA, t_list **rootB);
void		pa(t_list **rootA, t_list **rootB);
void		sa(t_list **rootA);
void		sb(t_list **rootB);
void		ss(t_list **rootA, t_list **rootB);
void		ra(t_list **rootA);
void		rb(t_list **rootB);
void		rr(t_list **rootA, t_list **rootB);
void		rra(t_list **rootA);
void		rrb(t_list **rootB);
void		rrr(t_list **rootA, t_list **rootB);

/* sort */
int			maxExt(t_list *a);
int			minExt(t_list *a);
void		sort_t(t_list **stack);
void		low_sort(t_list **stack_a, t_list **stack_b);
void	    big_sort(t_list **stack_a, t_list **stack_b);
bool	    firsthalf(int a, int b);

void		prit_stack(t_list *stack);



#endif