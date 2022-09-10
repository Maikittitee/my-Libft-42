/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:39:33 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/10 17:42:25 by ktunchar         ###   ########.fr       */
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
	//if (!haystack || !(needle[i]))
		//return ((char *)haystack);
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
	strcpy(str,"");
    	printf("Real   result : %s\n",strnstr(str,"",0));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strnstr(str,"",0));
}
*/