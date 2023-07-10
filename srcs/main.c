/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:05 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/10 17:28:19 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

void	free_list(t_list **root)
{
		while (*root)
	{
		t_list *tmp = *root;
		*root = (*root)->next; 
		free(tmp);
	}
	*root = (void *)0;
}

void prit_stack(t_list *stack)
{
	t_list *root = stack;
	printf("==============START==============\n");
	while (root)
	{
		printf("-%d-\n", root->data);
		root = root->next;
	}
	printf("==============END==============\n");
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*root_a;
	t_list	*root_b;

	root_a = NULL;
	root_b = NULL;
	i = 0;
	if (ac <= 1)
		ft_panic("\033[33mError: no arguments\033[0m\n");
	root_a = check_input(ac, av, 1);
	if (ft_lstsize(root_a) < 8)
		low_sort(&root_a, &root_b);
	else
		big_sort(&root_a, &root_b);
	free_list(&root_a);
	free_list(&root_b);
	return (0);
}
