/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:21:58 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/29 10:02:08 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_search_c(char const *s, char c);
static int		ft_cpy_s_parts(char const *s, char c, size_t counter_substr,
					char **splited_string);
static size_t	ft_check_len_s_a(char const *s, char c);
static void		ft_free_splited_string(char **splited_string, size_t count);

char	**ft_split(char const *s, char c)
{
	char	**splited_string;
	size_t	counter_substr;
	int		control_malloc_substr;

	if (!s)
		return (NULL);
	counter_substr = ft_search_c(s, c);
	splited_string = (char **)malloc((counter_substr + 1) * sizeof(char *));
	if (splited_string == NULL)
		return (NULL);
	control_malloc_substr = ft_cpy_s_parts(s, c, counter_substr,
			splited_string);
	if (control_malloc_substr != 0)
	{
		ft_free_splited_string(splited_string, control_malloc_substr);
		return (NULL);
	}
	splited_string[counter_substr] = NULL;
	return (splited_string);
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
	size_t	sub_len;

	i = 0;
	a = 0;
	while (s[i] != '\0' && a < counter_substr)
	{
		while (s[i] == c)
			i++;
		sub_len = ft_check_len_s_a(s + i, c);
		if (s[i] != '\0')
		{
			splited_string[a] = (char *)malloc((sub_len + 1) * sizeof(char));
			if (splited_string[a] == NULL)
			{
				ft_free_splited_string(splited_string, a);
				return (-1);
			}
			ft_strlcpy(splited_string[a], s + i, sub_len + 1);
			i += sub_len;
			a++;
		}
	}
	return (0);
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

static void	ft_free_splited_string(char **splited_string, size_t count)
{
	while (count > 0)
		free(splited_string[--count]);
	free(splited_string);
}
