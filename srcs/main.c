/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:05 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:30:46 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/head.h"

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
	rra(&root_a);
	while (root_a)
	{
		printf("-%d-\n", root_a->data);
		root_a = root_a->next;
	}
	printf("======================\n");
	while (root_b)
	{
		printf("-%d-\n", root_b->data);
		root_b = root_b->next;
	}
	return (0);
}
