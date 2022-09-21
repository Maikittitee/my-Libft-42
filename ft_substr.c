/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:16:51 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/21 19:05:55 by ktunchar         ###   ########.fr       */
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
	if (start >= ft_strlen(str))
		return ((char *) ft_calloc(1, sizeof(char)));
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (str[start] && i < len)
		buffer[i++] = str[start++];
	buffer[i++] = '\0';
	return (buffer);
}
/*
int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s\n",ft_substr(str,0,10));
}
*/
