/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 03:50:48 by aankote           #+#    #+#             */
/*   Updated: 2022/10/31 03:50:51 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        if (lst->next == NULL)
             return (lst);
        lst =lst->next;
    }
    return (lst);
   
}
// t_list *ft_lstlast(t_list *lst)
// {
//     t_list *last;
//     last = (t_list *)malloc(sizeof(t_list));
    
//     if (!lst)
//         return (0);   
//     while (lst)
//     {
//         lst = lst->next;
//     }
//     lst->next = last;
//     last->next = NULL;
//     return (last);
// }
