#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t	i;
    char    *dest;
    char    *source;
    
    source = (char *)src;
    dest = (char *)dst;
	i = 0;
	while (i < dstsize - 1 && source[i] && dstsize != 0)
	{
		dest[i] = source[i];
		i++;
	}
	if (dstsize != 0)
		dest[i] = '\0';
	return (dest);
}*/

int main()
{
    char src[100] = "Helle";
    char dest[100];

    memcpy(dest, src,2);
    printf("%s\n",dest);
}