/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_extrems.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:02 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/10 06:21:13 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

int	maxExt(t_list *stack)
{
	int		max;
	int 	pos;
	t_list	*tmp;
	int		r_pos;
	
	pos = 0;
	r_pos = 0;
	max = stack->data;
	tmp = stack;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			r_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (r_pos);
}

int	minExt(t_list *stack)
{
	int		min;
	int 	pos;
	int		r_pos;
	t_list	*tmp;

	pos = 0;
	r_pos = 0;
	min = stack->data;
	tmp = stack;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			r_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (r_pos);
}
