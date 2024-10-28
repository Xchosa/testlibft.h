
#include "./libft.h"

static size_t	ft_search_c(char const *s, char c);
static int		ft_cpy_s_parts(char const *s, char c, size_t counter_substr,
					char **splited_string);
static void		ft_free_slot(char **split, size_t counter_substr);
static size_t	ft_check_len_s_a(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**splited_string;
	size_t	counter_substr;
	size_t	control_malloc_substr;

	counter_substr = ft_search_c(s, c);
	splited_string = (char **)malloc((counter_substr + 1) * sizeof(char *));
	if (!splited_string || !s)
		return (NULL);
	while (s[counter_substr])
	{
		if(s[counter_substr] != c)
			{
				if (!ft_cpy_s_parts(s, c, counter_substr, splited_string))
					return (ft_free_slot(splited_string, counter_substr), NULL);
			}
	ft_cpy_s_parts(s, c, counter_substr,
			splited_string);
	splited_string[counter_substr] = NULL;
	return (splited_string);
}
}

static size_t	ft_search_c(char const *s, char c)
{
	size_t	i;
	size_t	counter_substr;

	i = 0;
	counter_substr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter_substr++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter_substr);
}
int	ft_cpy_s_parts(char const *s, char c, size_t counter_substr,
		char **splited_string)
{
	size_t	i;
	size_t	a;
	size_t	b;
	size_t	sub_len;

	i = 0;
	a = 0;
	while (s[i] != '\0' && a < counter_substr)
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			sub_len = ft_check_len_s_a(s + i, c);
			splited_string[a] = (char *)malloc((sub_len + 1) * sizeof(char));
			if (!splited_string[a])
				ft_free_slot(split, counter_substr)
					b = 0;
			while (s[i] != c && s[i])
				splited_string[a][b++] = s[i++];
			splited_string[a][b] = '\0';
			a++;
		}
	}
	return (0);
}

static void	ft_free_slot(char **split, size_t counter_substr)
{
	while (counter_substr > 0)
	{
		free(split[counter_substr]);
		counter_substr--;
	}
	free(split);
}

static size_t	ft_check_len_s_a(char const *s, char c)
{
	size_t	s_len;

	s_len = 0;
	while (s[s_len] != c && s[s_len] != '\0')
	{
		s_len++;
	}
	return (s_len);
}
