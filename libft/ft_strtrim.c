/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:56:02 by aankote           #+#    #+#             */
/*   Updated: 2022/10/15 11:24:05 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	strbegin(char const *s1, char const *set)
{
	int	i;
	int j;
	int test;

	i = 0;
	while (s1[i])
	{
		j = 0;
		test = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			test = 1;
			j ++;
		}
		if (test == 0)
		return (i);
		i ++;
	}
	return (0);
}

static int	strend(char const *s1, char const *set)
{
	int	i;
	int j;
	int test;
	int cpt;

	i = ft_strlen(s1) - 1;
	cpt = 0;
	while (s1[i] && i >= 0)
	{
		j = 0;
		test = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			test = 1;
			j ++;
		}
		if (test == 0)
		return (cpt);
		i --;
		cpt ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;

	i = strbegin(s1,set);
	j = 0;
	printf("%lu\n",sizeof(char) * (ft_strlen(s1) - strbegin(s1,set) - strend(s1,set) + 1));
	if((str = malloc(sizeof(char) * (ft_strlen(s1) - strbegin(s1,set) - strend(s1,set) + 1))))
	{
	while (s1[i] && i < ft_strlen(s1) - strend(s1,set))
	{
		str[j] = s1[i];
		i ++;
		j ++;
	}
	str[j] = '\0';
	return (str);
	}
	return (0);
}
