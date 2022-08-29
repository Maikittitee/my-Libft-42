/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:34:47 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/29 13:36:01 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i] && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char dest[20];
	char src[100];
	//char dest2[20];
	//char src2[100];

	strcpy(src,"lorem");

	printf("%zu\n",ft_strlcpy(dest, "lorem", 15));
	printf("%s\n",dest);
	printf("%s\n",src);

	strcpy(src2,"lorem ipsum dolor sit amet");

	printf("%zu\n",ft_strlcpy(dest2, src2, 15));
	printf("%s\n",dest2);
	printf("%s\n",src2);

}

*/
