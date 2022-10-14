/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:10:34 by aankote           #+#    #+#             */
/*   Updated: 2022/10/13 15:10:37 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char   *ptr;

    if( (ptr = (char *)malloc(count * size)))
    {
        ft_bzero(ptr,count);
        return (ptr);
    }
     return (0);
}
