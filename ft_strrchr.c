/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:50:27 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/31 20:55:06 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *)s;
	if (!str)
		return (NULL);
	len = strlen(str);
	while (str[len] != c && len > 0)
		len --;
	if (str[len] == c)
		return (str + len);
	else
		return (0);
}
/*
int	main(void)
{
	char t[] = "bonjour";
	char t2[] = "";

	printf("lib = %s\n",strrchr(t, 'k'));
	printf("my = %s\n",ft_strrchr(t, 'k'));
	printf("lib = %s\n",strrchr(t, '\0'));
	printf("my = %s\n",ft_strrchr(t, '\0'));
	printf("lib = %s\n",strrchr(t2, '\0'));
	printf("my = %s\n",ft_strrchr(t2, '\0'));
	// printf("This is T+2 == []",);
	printf("lib = %s\n",strrchr(t+2, 'b'));
	printf("my = %s\n",ft_strrchr(t+2, 'b'));
	printf("lib = %s\n",strrchr(t, '\0'));
	printf("my = %s\n",ft_strrchr(t, '\0'));
}
*/