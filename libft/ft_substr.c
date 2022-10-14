/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:29:58 by aankote           #+#    #+#             */
/*   Updated: 2022/10/14 11:30:06 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int st;
    unsigned int i;
    char *substr;

    i = 0;
    st =start;
    if ((substr = malloc(sizeof(substr) * (len + 1))))
    {
        while (s[st] && st < len + start)
        {
            substr[i] = s[st];
            st ++;
            i ++;
        }
        substr[i] = '\0';
        return (substr);
    }
return (0);
}
