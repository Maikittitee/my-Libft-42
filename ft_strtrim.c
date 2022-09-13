/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:47:52 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/13 20:00:49 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		how_much_i_need_to_allocate(char *str, char *set)
{
	int	i;
	int	j;
	int	count;
	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	return (ft_strlen(str) - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	char	*str;
	char	*find;
	int		i;
	int		j;
	int		k;

	str = (char *)s1;
	find = (char *)set;
	buffer = malloc(sizeof(char) * (how_much_i_need_to_allocate(str, find) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	k - 0;
	while (str[i])
	{
		j == 0;
		if (str[i] == find[j])
			i++;
		if (str[i] != find[j])
			j++;
		

				j++;
			else if (!find[j])
				buffer[k] = str[i];
			else //str[i] == find[j]
				break
			j++;
		}
		i++;
	}
}


int	main(void)
{
	printf("Hello,He = %d\n",how_much_byte_that_i_need_to_allocate("HelloooooeeeH","He"));
}