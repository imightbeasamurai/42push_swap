/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrahim <aerrahim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:52 by aerrahim          #+#    #+#             */
/*   Updated: 2023/07/09 16:41:14 by aerrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	skip_space(const char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long	sum;
	long	sign;
	long	i;

	sum = 0;
	sign = 1;
	i = skip_space(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		sum = sum * 10 + str[i] - 48;
		i++;
	}
	if (str[i])
		ft_panic("\033[31mError: Invalid input\033[0m\n");
	if ((sum * sign) > 2147483647 || ((sum * sign) < -2147483648))
		ft_panic("\033[33mError: exceeded MAX or MIN int\033[0m\n");
	return (sum * sign);
}
