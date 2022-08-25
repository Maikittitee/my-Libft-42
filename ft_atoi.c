#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	ngt;

	result = 0;
	sign = 0;
	ngt = 1;
	while (*str && *str <= ' ' && *str != '\e')
		str++;
	while (*str && (*str == '-' || *str == '+') && *str != '\e')
	{
		if (*str == '-')
			ngt = -1;		
		sign += 1;
		str++;
	}
	if (sign > 1)
		return (0);
	while (*str >= '0' && *str <= '9' && *str != '\e')
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
	printf("atoi : %d\n",atoi("-11"));
	printf("ft_atoi : %d\n",ft_atoi("-11"));
}*/
