/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:59:35 by aankote           #+#    #+#             */
/*   Updated: 2022/10/22 22:59:37 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *trim1(char const *s1, char const *set)
{
    int i;
    int j;
    int test;

    while(s1[i])
    {
        test = 0;
        j = 0;
        while (set[j])
        {
            if(set[j] == s1[i])
            {
                test = 1;
                j ++;
            }
        }
        if (test == 0)
            return (s1 + i);
            i ++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;
    int len;

	i = strbegin(s1,set);
	j = 0;
    len = ft_strlen(trim1(s1,set)) - strend(s1,set) + 1;
    return (ft_substr(trim1(s1,set),0,len));
}