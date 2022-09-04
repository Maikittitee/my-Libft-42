/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:47:42 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/04 22:48:52 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *str)
{
	int	result;
	int	ngt;

	result = 0;
	ngt = 1;
	while (ft_isspace(*str))
		str ++;
	if (*str && ft_issign(*str))
	{
		if (*str == '-')
			ngt = -1;
		str++;
	}
	while (ft_isdigit(*str))
		result = (result * 10) + (*str++ - '0');
	return (ngt * result);
}
/*
int	main()
{
	printf("atoi : %d\n",atoi("-9223372036854775809"));
	printf("ft_atoi : %d\n",ft_atoi("-9223372036854775809"));
	printf("atoi : %d\n",atoi("2147483649"));
	printf("ft_atoi : %d\n",ft_atoi("2147483649"));
	printf("atoi : %d\n",atoi("++--66"));
	printf("ft_atoi : %d\n",ft_atoi("++--66"));
	printf("atoi : %d\n",atoi("--1"));
	printf("ft_atoi : %d\n",ft_atoi("--1"));
	printf("atoi : %d\n",atoi("123"));
	printf("ft_atoi : %d\n",ft_atoi("123"));
	printf("atoi : %d\n",atoi("+++1"));
	printf("ft_atoi : %d\n",ft_atoi("+++1"));
	printf("atoi : %d\n",atoi("+12"));
	printf("ft_atoi : %d\n",ft_atoi("+12"));
	printf("atoi : %d\n",atoi("\nabc"));
	printf("ft_atoi : %d\n",ft_atoi("\nabc"));
	printf("atoi : %d\n",atoi("\t121asd4sd"));
	printf("ft_atoi : %d\n",ft_atoi("\t121iasd4sd"));
	printf("atoi : %d\n",atoi("\e-11"));
	printf("ft_atoi : %d\n",ft_atoi("\e-11"));

}
*/