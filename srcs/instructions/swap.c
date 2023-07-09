/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:30 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:54:27 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

void	sa(t_list **rootA)
{
	t_list	*tmp;

	if (*rootA && (*rootA)->next)
	{
		tmp = *rootA;
		*rootA = (*rootA)->next;
		tmp->next = (*rootA)->next;
		(*rootA)->next = tmp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **rootB)
{
	t_list	*tmp;

	if (*rootB && (*rootB)->next)
	{
		tmp = *rootB;
		*rootB = (*rootB)->next;
		tmp->next = (*rootB)->next;
		(*rootB)->next = tmp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **rootA, t_list **rootB)
{
	sa(rootA);
	sb(rootB);
}
