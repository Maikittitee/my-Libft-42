/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:26:24 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/04 22:11:04 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] && str[i] != c && i < n)
		i++;
	if (str[i] == c && i < n)
		return (str + i);
	else
		return (NULL);
}
/*
int	main(void)
{
	char *s = "hello\0rgr";
	char *s2 = "hello\0rgr";

	printf("memchr = %s\n",memchr(s, '\0', 9));
	printf("ft_memchr = %s\n",ft_memchr(s2, '\0', 9));
}
*/