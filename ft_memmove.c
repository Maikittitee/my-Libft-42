#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char *dest;
	char *source;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;

	while (i < len && source[i])
	{
		dest[i] = source[i];
		i++;
	}
	//dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[10] = "Hello";
	char	dst[10];
	char	src2[10] = "Hello";
	char	dst2[10];
	ft_memmove(dst,src,8);
	printf("my = %s\n",dst);
	memmove(dst,src,8);
	printf("Real = %s\n",dst);
}*/