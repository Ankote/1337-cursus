/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:45:14 by aankote           #+#    #+#             */
/*   Updated: 2022/10/11 14:45:09 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 #include <stdlib.h>
#include <string.h>

int	main()
{
   
  char s[10] = "abcdefghij";
  char d[10] = "12345";

  char *dst;
  char *src;
  dst =  d;
  src = s;
  ft_strlcat(dst,src ,10);
  printf("%s",dst);

	return (0);
}
