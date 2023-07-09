#include "../includes/head.h"

int main(int ac, char **av)
{
	int	 	i;
	t_list *rootA;
	t_list *rootB;

	rootA = NULL;
	rootB = NULL;
	i = 0;
	if (ac <= 1)
		ft_panic("\033[33mError: no arguments\033[0m\n");
	rootA = check_input(ac, av);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pb(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	pa(&rootA, &rootB);
	rra(&rootA);
	while (rootA)
	{
		printf("-%d-\n", rootA->data);
		rootA = rootA->next;
	}
	printf("======================\n");
	while (rootB)
	{
		printf("-%d-\n", rootB->data);
		rootB = rootB->next;
	}
	return (0);
}
