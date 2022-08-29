/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:29:57 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/29 13:33:43 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != c && str[i])
		i++;
	if (str[i] == c)
		return (str + i);
	else
		return (0);
}
/*
int main()
{
    char t[20] = "hello";

	printf("strchr : %s\n",strchr(t,'a'));
	printf("ft_strchr : %s\n",ft_strchr(t,'a'));
	
}*/