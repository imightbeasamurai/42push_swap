#include "../includes/libft.h"

void ft_lstdelone(t_list *lst, void (*del)(int))
{
    if (!lst || !del)
        return ;
    del(lst->data);
    free(lst);
}