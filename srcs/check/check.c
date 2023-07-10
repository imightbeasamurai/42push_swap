/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:16:56 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/10 15:32:22 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/head.h"

void	str_free(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	check_sorted(t_list	*root)
{
	t_list	*froot0;
	t_list	*froot1;

	froot0 = root;
	while (froot0)
	{
		froot1 = froot0->next;
		while (froot1)
		{
			if (froot0->data > froot1->data)
				return ;
			froot1 = froot1->next;
		}
		froot0 = froot0->next;
	}
	exit(0);
}

void	check_duplicate(t_list *root)
{
	t_list	*froot0;
	t_list	*froot1;

	froot0 = root;
	while (froot0)
	{
		froot1 = froot0->next;
		while (froot1)
		{
			if (froot0->data == froot1->data)
				ft_panic("\033[31mError\033[0m\n");
			froot1 = froot1->next;
		}
		froot0 = froot0->next;
	}
}

t_list	*check_input(int ac, char **av, int i)
{
	int		j;
	t_list	*root;
	char	**splitted;

	root = NULL;
	while (i < ac)
	{
		splitted = ft_split(av[i], ' ');
		j = 0;
		if (!splitted)
			ft_panic("\033[31mError\033[0m\n");
		else if (splitted && !*splitted)
			ft_panic("\033[31mError\033[0m\n");
		else
			while (splitted && splitted[j])
				ft_lstadd_back(&root, ft_lstnew(ft_atoi(splitted[j++])));
		str_free(splitted);
		i++;
	}
	check_duplicate(root);
	check_sorted(root);
	return (root);
}
