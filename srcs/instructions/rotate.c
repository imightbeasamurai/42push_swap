/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:21 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:53:57 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

void	ra(t_list **rootA)
{
	t_list	*tmp0;
	t_list	*tmp1;

	if (*rootA && (*rootA)->next)
	{
		tmp0 = *rootA;
		tmp1 = (*rootA)->next;
		while (tmp0->next)
			tmp0 = tmp0->next;
		tmp0->next = *rootA;
		(*rootA)->next = NULL;
		*rootA = tmp1;
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **rootB)
{
	t_list	*tmp0;
	t_list	*tmp1;

	if (*rootB && (*rootB)->next)
	{
		tmp0 = *rootB;
		tmp1 = (*rootB)->next;
		while (tmp0->next)
			tmp0 = tmp0->next;
		tmp0->next = *rootB;
		(*rootB)->next = NULL;
		*rootB = tmp1;
		write(1, "rb\n", 3);
	}
}

void	rr(t_list **rootA, t_list **rootB)
{
	ra(rootA);
	rb(rootB);
}
