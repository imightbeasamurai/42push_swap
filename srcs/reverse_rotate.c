#include "../includes/head.h"

void	rra(t_list **rootA)
{
	t_list	*tmp0;
	t_list	*tmp1;

	if (*rootA && (*rootA)->next)
	{
		tmp0 = *rootA;
		while (tmp0->next->next)
			tmp0 = tmp0->next;
		tmp1 = tmp0->next;
		tmp0->next = NULL;
		tmp1->next = *rootA;
		*rootA = tmp1;
	}
}

void	rrb(t_list **rootB)
{
	t_list	*tmp0;
	t_list	*tmp1;

	if (*rootB && (*rootB)->next)
	{
		tmp0 = *rootB;
		while (tmp0->next->next)
			tmp0 = tmp0->next;
		tmp1 = tmp0->next;
		tmp0->next = NULL;
		tmp1->next = *rootB;
		*rootB = tmp1;
	}
}

void	rrr(t_list **rootA, t_list **rootB)
{
	rra(rootA);
	rrb(rootB);
}