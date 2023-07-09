/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:18:45 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:34:56 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*s;

	if (!str1 || !str2)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		s[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		s[i + j] = str2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
