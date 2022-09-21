/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:50:27 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/21 23:53:43 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*str;

	str = (char *)s;
	tmp = NULL;
	while (*str)
	{
		if (*str == (char)c)
			tmp = str;
		str++;
	}
	if (c == 0)
		return (str);
	if (tmp == NULL)
		return (NULL);
	return (tmp);
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