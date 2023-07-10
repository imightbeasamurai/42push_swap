/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 06:45:38 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/10 22:15:50 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

void	sort_t(t_list **stack)
{
	int			max_pos;
	int			min_pos;

	max_pos = maxExt(*stack);
	min_pos = minExt(*stack);


	if (!max_pos && min_pos == 1)
		ra(stack);
	else if (!max_pos && min_pos == 2)
	{
		ra(stack);
		sa(stack);
	}
	else if (max_pos == 1 && !min_pos)
	{
		sa(stack);
		ra(stack);
	}
	else if (max_pos == 1 && min_pos == 2)
		rra(stack);
	else if (max_pos == 2 && min_pos == 1)
		sa(stack);
}

bool	firsthalf(int a, int b)
{
	if (a <= b / 2)
		return (true);
	return (false);
}

void	low_sort(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		int a = minExt(*stack_a);
		if(a == 0)
		{
			pb(stack_a, stack_b);
			continue ;
		}	
		if (firsthalf(a + 1, ft_lstsize(*stack_a))) // index + element
			ra(stack_a);
		else
			rra(stack_a);
	}

	sort_t(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}
