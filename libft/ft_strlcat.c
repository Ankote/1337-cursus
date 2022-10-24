/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:39:51 by aankote           #+#    #+#             */
/*   Updated: 2022/10/12 12:39:55 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlcat(char * dst, const char *src, size_t dstsize)
{
    unsigned int i;
    unsigned int len;
    unsigned int initLen;

    if(dstsize == 0 && dst == NULL)
    return (ft_strlen(src));
    i = 0;
    initLen = ft_strlen(dst);
    len = initLen;
    
    if (dstsize > len)
    {
        while (src[i] && len < dstsize - 1)
        {
            dst[len] = src[i];
            i ++;
            len ++;
        }
        dst[len] = '\0';
    }
    if (dstsize > initLen)
    return (ft_strlen(src) + initLen);
    return (ft_strlen(src) + dstsize);

}