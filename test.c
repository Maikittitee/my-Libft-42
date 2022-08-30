#include <stdlib.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int    i;
    int    sign;
    //char    *dststr;
    //char    *srcstr;

    //dststr = (char *)dst;
    //srcstr = (char *)src;
    sign = 1;
    i = 0;
    if (dst > src)
    {
        sign = -1;
        i = (int)len - 1;
    }
    while (len > 0 && ((char *)src)[i])
    {
        ((char *)dst)[i] = ((char *)src)[i];
        len --;
        i += (sign * 1);
    }
    return (dst);
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if (!dst && !src)
        return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}

int    main()
{
    char    src[30] = "TTTRRRRRRRRRRRR";

    char    src2[30] = "TTTRRRRRRRRRRRR";

    //ft_memcpy(src + 2,src,5);
    printf("memcpy = %s\n",((char*)ft_memcpy(src + 2,src,8)));
    //memmove(src2 + 2,src2,5);
    printf("memmove = %s\n",((char*)ft_memmove(src2 + 2,src2,8)));
}
