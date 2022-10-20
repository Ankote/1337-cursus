/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:15 by aankote           #+#    #+#             */
/*   Updated: 2022/10/13 20:28:09 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	my_int;
	int	sign;

	i = 0;
	sign = 1;
	my_int = 0;
	if (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		my_int = my_int * 10 + str[i] - 48;
		i ++;
	}
	return (my_int * sign);
}
