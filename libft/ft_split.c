#include "../includes/libft.h"

static int	ft_totalwords(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str && str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_wordsize(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **str, int i)
{
	while (i-- > 0)
		free (str[i]);
	free (str);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		words;
	char	**s;
	int		size;
	int		j;

	i = 0;
	j = -1;
	if (!str)
		return (NULL);
	words = ft_totalwords(str, c);
	s = (char **)malloc((words + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	while (++j < words)
	{
		while (str[i] == c)
			i++;
		size = ft_wordsize(str, c, i);
		s[j] = ft_substr((char *)str, i, size);
		if (s == NULL)
			return (ft_free(s, j), NULL);
		i += size;
	}
	return (s[j] = 0, s);
}
