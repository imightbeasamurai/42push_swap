#include "../includes/libft.h"

void    ft_lstclear(t_list **lst, void (*del)(int))
{
    t_list *tmp;

    if (!lst || !del)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
}