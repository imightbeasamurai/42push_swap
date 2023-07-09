/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:13 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:52:59 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

void	pb(t_list **rootA, t_list **rootB)
{
	t_list	*tmp;

	if (*rootA)
	{
		tmp = *rootA;
		*rootA = (*rootA)->next;
		tmp->next = *rootB;
		*rootB = tmp;
		write(1, "pb\n", 3);
	}
}

void	pa(t_list **rootA, t_list **rootB)
{
	t_list	*tmp;

	if (*rootB)
	{
		tmp = *rootB;
		*rootB = (*rootB)->next;
		tmp->next = *rootA;
		*rootA = tmp;
		write(1, "pa\n", 3);
	}
}
