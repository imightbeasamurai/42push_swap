#include "../includes/libft.h"

t_list  *ft_lstnew(int data)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}