/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:51:15 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/31 22:15:33 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t 	len;
	size_t	dstlen;

	len = ft_strlen(dst);
	if (dstsize > 0)
	{	
		len += ft_strlen(src);
		i = 0;
		dstlen = ft_strlen(dst);
		while (dstlen < dstsize && src[i])
		{
			dst[dstlen] = src[i];
			i++;
			dstlen++;
		}
		if (dstlen < dstsize)
			dst[dstlen++] = '\0';
	}	
	return (len);
}
/*
int main()
{
    char	dst[14] = "SAWAT";
    char	src[20] = "World";
    char	dst1[20] = "SAWAT";
    char	src1[20] = "World";


	printf("Return Value = %zu\n",strlcat(dst,src,0));	
	printf("strcat = %s\n",dst);
	printf("ft Return Value = %zu\n",ft_strlcat(dst1,src1,0));	
	printf("ft_strcat = %s\n",dst1);

}
*/
