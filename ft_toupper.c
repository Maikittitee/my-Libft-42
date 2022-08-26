#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int	main()
{
	char str[20];
	int	i;

	i = 0;
	strcpy(str,"abcdefgHIJKL");
	while (str[i])
	{
		printf("%c",toupper(str[i]));
		i++;
	}
}*/
