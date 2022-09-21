/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:29:57 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/21 23:54:57 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c && str[i])
		i++;
	if (str[i] == (char)c)
		return (str + i);
	if (c == '\0')
		return (str);
	else
		return (NULL);
}
/*
int main()
{
    char t[20] = "hello";

	printf("strchr : %s\n",strchr(t,'a'));
	printf("ft_strchr : %s\n",ft_strchr(t,'a'));
	
}*/
