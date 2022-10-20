/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:39:41 by aankote           #+#    #+#             */
/*   Updated: 2022/10/20 01:02:30 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*alloc(int n)
{
	char	*p;
	int		cpt;

	cpt = 0;
	if (n == -2147483648)
	{
		cpt ++;
		n /= 10;
	}
	if (n < 0 || n == 0)
	{
		cpt = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		cpt ++;
	}
	p = malloc(sizeof(char) * (cpt + 1));
	if (p != NULL)
		return (p);
	return (0);
}

static int	nbdigits(int n)
{
	int	cpt;

	cpt = 0;
	if (n == -2147483648)
	{
		cpt ++;
		n /= 10;
	}
	if (n < 0)
	{
		cpt ++;
		n *= -1;
	}
	while (n > 0)
	{
		cpt ++;
		n /= 10;
	}
	return (cpt);
}

static char	*mini_itoa(int n)
{
	char	*itoa;
	int		index;

	index = nbdigits(n);
	itoa = alloc(n);
	if (n == -2147483648)
	{
		itoa[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		n *= -1;
		itoa[0] = '-';
	}
	itoa[index --] = '\0';
	while (n > 0)
	{
		itoa[index --] = (n % 10) + 48;
		n /= 10;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;

	itoa = alloc(n);
	if (itoa != NULL)
	{
		if (n == 0)
		{
			itoa[0] = '0';
			itoa[1] = '\0';
		}
		else
		{
			itoa = mini_itoa(n);
		}
		return (itoa);
	}
	return (0);
}
