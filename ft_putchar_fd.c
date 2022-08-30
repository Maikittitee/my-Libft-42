#include "libft.h"

void ft_putchar_fd(char c, int nb)
{
	write(nb, &c, 1);
}
