/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:30 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:21:29 by aerrahim         ###   ########.fr       */
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
	}
}

void	ss(t_list **rootA, t_list **rootB)
{
	sa(rootA);
	sb(rootB);
}
