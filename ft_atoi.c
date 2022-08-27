/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:47:42 by ktunchar          #+#    #+#             */
/*   Updated: 2022/08/27 16:30:36 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	ngt;

	result = 0;
	sign = 0;
	ngt = 1;
	while (ft_isspace(*str))
		str ++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			ngt = -1;
		sign += 1;
		str ++;
	}
	if (sign > 1)
		return (0);
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - '0');
	return (ngt * result);
}
/*
int	main()
{
	printf("atoi : %d\n",atoi("-+--42"));
	printf("ft_atoi : %d\n",ft_atoi("-+--42"));
	printf("atoi : %d\n",atoi("-+55"));
	printf("ft_atoi : %d\n",ft_atoi("-+55"));
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
	printf("ft_atoi : %d\n",ft_atoi("\e-11"))

}*/
