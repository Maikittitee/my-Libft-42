/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:39:33 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/11 19:02:08 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (len < 0)
		return (0);
	if (!(needle[i]))
		return ((char *)haystack);
	str = (char *)haystack;
	while (str[i] && i <= len)
	{
		while (str[i + j] == needle[j] && str[i + j] && i + j < len)
			j++;
		if (!needle[j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int     main(void)
{
	char str[300];
	strcpy(str,"aaaaaa\0aaaa");
    	printf("Real   result : %s\n",strnstr(NULL,"s",10));
	//strcpy(str,"aaaaaa\0aaaa");
    	//printf("User   result : %s\n",ft_strnstr(str,NULL,10));
}
*/