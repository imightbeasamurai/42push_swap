#include "../includes/head.h"

void	str_free(char **str)
{
	int	i;

	i = 0;
	while (!str[i])
		free(str[i++]);
	free(str);
}

void check_sorted(t_list *root)
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
	ft_panic("\033[31mError: already sorted\033[0m\n");
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
				ft_panic("\033[31mError: duplicate exist\033[0m\n");
			froot1 = froot1->next;
		}
		froot0 = froot0->next;
	}
}

t_list	*check_input(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*root;
	char	**splitted;
	
	root = NULL;
	i = 1;
		while (i < ac)
		{
			splitted = ft_split(av[i], ' ');
			j = 0;
			if (!splitted)
				ft_panic("\033[31mError: no memory allocated\033[0m\n");
			else if (splitted && !*splitted)
				ft_panic("\033[31mError: empty argument\033[0m\n");
			else
				while (splitted && splitted[j])
				{
					ft_lstadd_back(&root, ft_lstnew(ft_atoi(splitted[j++])));
				}
			str_free(splitted);
			i++;
		}
				check_duplicate(root);
				check_sorted(root);
	return (root);
}
