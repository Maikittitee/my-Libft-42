/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:16:51 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/07 12:41:06 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)s;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return(NULL);
	while (str[i] != (int)start)
	{
		if (!str[i])
		{
			return (NULL);
		}
		i++;
	}
	while (j < len)
	{
		if (str[i])
			buffer[j] = str[i];
		else
			buffer[j] = '\0';
		j++;
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
/*
int	main()
{
	char	str[10] = "1234";
	//char	dst[6];

	printf("%s\n",ft_substr(str,0,1));
}
*/