/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:13:55 by aankote           #+#    #+#             */
/*   Updated: 2022/10/11 21:14:05 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static  int	strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
char     *ft_strrchr(const char *s, int c)
{
    int i;

    i = strlen(s);
    while(i > 0)
    {
        if (s[i] == c)
        {
            return (char *)s + i;
           
        } 
        i --;
    }
    return (0);
}
