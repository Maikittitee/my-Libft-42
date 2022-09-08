#include "libft.h"

static char	*append_word(char *s, char c)
{
	char	*buffer;
	int		i;
	int		j;
	int		len;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);

	j = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			buffer[j] = s[i];
			j++;
		}
		else
			break;
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
		if (s[i] != c && (s[i - 1] == c || !s[i - 1]))
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

	str = (char *)s;
	buffer = malloc(sizeof(char *) * (count_word(str, c) + 1));
	//Protect MALLOC
	if (!buffer)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || !str[i - 1]))
			buffer[j] = append_word(&str[i], c);
		i++;
		j++;
	}
	return (buffer);
}


int	main(int ac, char **av)
{
	int	i;
	char **dst;

	dst = ft_split(" i wanna hear you ay something",' ');
	i = 0;
	while (i < 6)
	{
		printf("index %d is %s\n",i,dst[i]);
		i++;
	}
	//printf("len of word = %d\n", append_word(av[1], ' '));
}
