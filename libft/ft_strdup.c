/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:45:53 by aankote           #+#    #+#             */
/*   Updated: 2022/10/13 16:45:57 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    int len;

    len = ft_strlen(s1);
    if ((copy = (char *)malloc(sizeof(copy) * (len + 1))))
    {
        ft_strlcpy(copy,s1,len + 1);
        return (copy);
    }
    return (0);
}
