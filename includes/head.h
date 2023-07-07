#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft.h"

// typedef struct s_list
// {
// 	void			*data;
// 	struct s_list	*next;
// }	t_list;

t_list		*check_input(int ac, char **av);
void		str_free(char **str);
void		check_duplicate(t_list *root);

#endif