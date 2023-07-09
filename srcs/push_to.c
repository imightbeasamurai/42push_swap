#include "../includes/head.h"

void	pb(t_list **rootA, t_list **rootB)
{
	t_list	*tmp;

	if (*rootA)
	{
		tmp = *rootA;
		*rootA = (*rootA)->next;
		tmp->next = *rootB;
		*rootB = tmp;
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
	}
}
