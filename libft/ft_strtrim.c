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

static int	testtrim(char const *s1, char const *set)
{
	int	i;
	int	test_start;
	int	test_end;

	i = 0;
	test_start = 0;
	test_end = 0;
	while (set[i])
	{
		if (s1[0] == set[i])
			test_start = 1;
		if (s1[ft_strlen(s1) - 1] == set[i])
			test_end = 1;
		i++;
	}
	if (test_start && test_end)
		return (2);
	else if (test_start)
		return (1);
	else if (test_end)
		return (-1);
	return (0);
}

static char	*allocmem(char const *s1, char const *set)
{
	char	*strtrim;

	if (testtrim(s1, set) == 2)
	{
		strtrim = (char *)malloc(sizeof(strtrim) * (ft_strlen(s1) - 1));
	}
	if (testtrim(s1, set) == 1 || testtrim(s1, set) == -1)
	{
		strtrim = (char *)malloc(sizeof(strtrim) * (ft_strlen(s1)));
	}
	if (testtrim(s1, set) == 0)
	{
		strtrim = (char *)malloc(sizeof(strtrim) * (ft_strlen(s1)) + 1);
	}
	return (strtrim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start_i;
	int		end_i;
	char	*strtrim;

	i = 0;
	start_i = 0;
	end_i = ft_strlen(s1);
	strtrim = allocmem(s1, set);
	if (testtrim(s1, set) == 2)
	{
		start_i ++;
		end_i -= 2;
	}
	else if (testtrim(s1, set) == 1)
	{
		start_i ++;
		end_i --;
	}
	else if (testtrim(s1, set) == -1)
		end_i --;
	while (s1[start_i] && i < end_i)
		strtrim[i++] = ((char *)s1)[start_i ++];
	strtrim[i] = '\0';
	return (strtrim);
}
