/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:47:42 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/05 20:12:25 by ktunchar         ###   ########.fr       */
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
/*
static int	ismaxlong(char *str)
{
	if (ft_strlen(str) > 19)
		return (1);
	else if (ft_strncmp(str,"9223372036854775807",19) >= 1)
		return (1);
	else
		return (0);
	}

static int	isminlong(char *str)
{
	return (0);
}
*/
int	ft_atoi(const char *str)
{
	unsigned long	result;
	unsigned long	ngt;
	int	i;

	i = 0;
	result = 0;
	ngt = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] && ft_issign(str[i]))
	{
		if (str[i] == '-')
			ngt = -1;
		i++;
	}
	//if (ismaxlong((char *)(&(str[i]))) && ft_isdigit(str[i]))
	//	return (-1);
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (ngt * result);
}
/*
int	main()
{
	printf("atoi : %d\n",atoi("9223372036854775808"));
	printf("ft_atoi : %d\n",ft_atoi("9223372036854775808"));
	printf("atoi : %d\n",atoi("-9223372036854775809"));
	printf("ft_atoi : %d\n",ft_atoi("-9223372036854775809"));
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
	printf("atoi : %d\n",atoi("121asd4sd"));
	printf("ft_atoi : %d\n",ft_atoi("121iasd4sd"));
	printf("atoi : %d\n",atoi("-11"));
	printf("ft_atoi : %d\n",ft_atoi("-11"));
}
*/