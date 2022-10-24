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
	long long my_int;
	int	sign;

	i = 0;
	sign = 1;
	my_int = 0;
	if(str == NULL)
		return (0);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')){
		i++;}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		my_int = my_int * 10 + str[i] - 48;
		i ++;
	}
	if (my_int == 9223372036854775807 && sign == 1)
	return (-1);
	if (my_int == 9223372036854775808 && sign == -1)
	return (0);
	return (my_int * sign);
}
