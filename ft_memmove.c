/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:57:40 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/31 20:54:18 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		sign = -1;
		i = (int)len - 1;
	}
	while (len > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		len --;
		i += (sign * 1);
	}
	return (dst);
}
/*
int	main()
{
	int	src[10] = {1, 2 ,3 ,4};
	int	dst[10];
	int	src2[10] = {1, 2 ,3 ,4};
	int	dst2[10];
	//ft_memcpy(src + 2,src,5);
	ft_memmove(dst,src,sizeof(int) * 4);
	int	j = 0;
	while (j < 10)
	{
		printf("ft_memmove[%d] = %d\n",j,dst[j]);
		j++;
	}

	//printf("ft_memmove = %d %d %d %d\n",dst[0],dst[1],dst[2],dst[3]);
	//memmove(src2 + 2,src2,5);
	memmove(dst2,src2,sizeof(int) * 4);

	int i = 0;
	while (i < 10)
	{
		printf("memmove[%d] = %d\n",i,dst2[i]);
		i++;
	}
}
*/
