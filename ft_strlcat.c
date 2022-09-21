/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:51:15 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/22 00:36:05 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	initdstlen;

	if (dstsize > 0)
	{	
		i = 0;
		dstlen = ft_strlen(dst);
		initdstlen = dstlen;
		while (dstlen < dstsize - 1 && src[i])
		{
			dst[dstlen] = src[i];
			i++;
			dstlen++;
		}
		if (dstlen < dstsize)
			dst[dstlen] = '\0';
	}
	if (ft_strlen(dst) < dstsize)
		return (ft_strlen(src) + initdstlen);
	else
		return (ft_strlen(src) + dstsize);
}
/*
int main()
{
    char	dst[23] = "Hello";
    char	dst1[23] = "Hello";
	
	//memset(dst,'r',15);
	//memset(dst1,'r',15);

	printf("dst = %s\n",dst);
	printf("dst1 = %s\n",dst1);
	printf("--------------------------------------\n");
	printf("Return Value = %zu\n",strlcat(dst,"WOLD",7));	
	printf("strcat = %s\n",dst);
	printf("ft Return Value = %zu\n",ft_strlcat(dst1,"WOLD",7));	
	printf("ft_strcat = %s\n",dst1);
}
*/
