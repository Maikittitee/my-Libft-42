/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:18:48 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/09 23:33:49 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char *s, char c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*append_word(char *s, char c)
{
	char	*buffer;
	int		i;
	int		j;
	int		len;

	len = word_len(s, c);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		if (s[i] != c)
			buffer[j++] = s[i];
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	buffer = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || i == 0))
			buffer[j++] = append_word(&str[i], c);
		i++;
	}
	buffer[j] = NULL;
	return (buffer);
}

/*
int	main(int ac, char **av)
{
	int	i;
	char **dst;

	dst = ft_split("    i    wanna h      ear     you say something  ",' ');
	i = 0;
	while (i < 7)
	{
		printf("index %d is %s\n",i,dst[i]);
		i++;
	}
}
*/
