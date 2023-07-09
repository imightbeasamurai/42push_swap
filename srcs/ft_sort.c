#include "../includes/head.h"

void    t_sort(t_list *rootA, t_list *rootB)
{

}

void    f_sort(t_list *rootA, t_list *rootB)
{

}

void    ft_sort(t_list *rootA, t_list *rootB)
{
    int *rpt;
    int i;

    i = 0;
    rpt = malloc(sizeof(int)*ft_lstsize(rootA));
    while (rootA)
    {
        rpt[i] = rootA->data;
        rootA = rootA->next;
        i++;
    }
}