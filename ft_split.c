/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:21:58 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/24 10:19:56 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_search_c(char const *s, char c);
static int		ft_cpy_s_parts(char const *s, char c, size_t counter_substr,
					char **splited_string);
static size_t	ft_check_len_s_a(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**splited_string;
	size_t	counter_substr;
	size_t	control_malloc_substr;

	if (!s)
		return (NULL);
	counter_substr = ft_search_c(s, c);
	splited_string = (char **)malloc((counter_substr + 1) * sizeof(char *));
	if (splited_string == NULL)
		return (NULL);
	control_malloc_substr = ft_cpy_s_parts(s, c, counter_substr,
			splited_string);
	if (control_malloc_substr != 0)
		return (NULL);
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
	size_t	b;
	size_t	sub_len;

	i = 0;
	b = 0;
	a = 0;
	while (s[i] != '\0')
	{
		while (s[i++] != c && a <= counter_substr)
		{
			sub_len = ft_check_len_s_a(&s[i], c);
			splited_string[a] = (char *)malloc((sub_len +1)* sizeof(char));
			if (splited_string[a] == NULL)
				return (1);
			while (s[i] != c && s[i] != '\0')
			{
				splited_string[a][b++] = s[i++];
			}
			splited_string[a][b] = '\0';
			a++;
			b = 0;
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
// int main(void)
// {
// 	int i:

//  char **result = ft_split("ich bin ein Star ' ');
//     for (int i = 0; result[i] != NULL; i++)
//         printf("Split[%d]: %s\n", i, result[i]);
//     for (int i = 0; result[i] != NULL; i++)
//         free(result[i]);

//     free(result);
//     return (0);
// }
