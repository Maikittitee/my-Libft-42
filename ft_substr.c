/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:16:51 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/07 13:38:47 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	if (start >= ft_strlen(str))
		return (buffer);
	while (i < len)
	{
		buffer[i] = str[start];
		i++;
		start++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s\n",ft_substr(str,400,20));
}
*/