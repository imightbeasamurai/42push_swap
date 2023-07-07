#include "../includes/head.h"

int main(int ac, char **av)
{
	int	 	i;
	t_list *root;
	root = NULL;
	i = 0;
	if (ac <= 1)
		ft_panic("\033[33mError: no arguments\033[0m\n");
	root = check_input(ac, av);
	while (root)
	{
		printf("-%d\n", (int)root->data);
		root = root->next;
	}

	return (0);
}
