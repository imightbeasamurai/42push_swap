#include "../../includes/head.h"

void quick_sort(int *arr, int size) // comes in with lstsize
{
	int		tmp;
	int		fi;
	int		si;

	fi = 0;
	while (fi < size)
	{
		si = fi + 1;
		while (si < size)
		{
			if (arr[fi] > arr[si])
			{
				tmp = arr[fi];
				arr[fi] = arr[si];
				arr[si] = tmp;
			}
			si++;
		}
		fi++;
	}
}

int *get_container(t_list *stack_a, int len)
{
	int     i;
	int     *container;
	t_list  *tmp;

	i = 0;
	container = malloc(sizeof(int) * len);
	if (!container)
		return (NULL);
	tmp = stack_a;
	while (tmp)
	{
		container[i++] = tmp->data;
		tmp = tmp->next;
	}
	quick_sort(container, len);
	return (container);
}
void    b_side(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		int a = maxExt(*stack_b);
		if(a == 0)
		{	
			pa(stack_a, stack_b);
			continue;
		}
		if (firsthalf(a + 1, ft_lstsize(*stack_b))) // index + element
			rb(stack_b);
		else
			rrb(stack_b);
	}
}

void    big_sort(t_list **stack_a, t_list **stack_b)
{
	int *container;
	int small_v;
	int big_v;
	int stack_len;

	while ((*stack_a)->next)
	{
		stack_len = ft_lstsize(*stack_a);
		container = get_container(*stack_a, stack_len);
		big_v = container[stack_len / 8];
		small_v = container[(stack_len / 9) >> 1];
		if ((*stack_a)->data <= small_v)
			pb(stack_a, stack_b);
		else if ((*stack_a)->data <= big_v)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else
			ra(stack_a);
		free (container);
	}
	b_side(stack_a, stack_b);
}
