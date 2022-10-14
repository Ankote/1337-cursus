/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:42:13 by aankote           #+#    #+#             */
/*   Updated: 2022/10/11 21:42:16 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned    int i;

    i = 0;
    while (src[i] && i < dstsize - 1 && dstsize > 0)
    {
        dst[i] = src[i];
        i ++;
    }
    dst[i] = '\0';
    return ft_strlen(src);

}