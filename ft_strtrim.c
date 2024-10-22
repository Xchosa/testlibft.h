/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:53:31 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/21 15:37:46 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_count_set(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	c;
	char	*newstr;
	size_t	s1_len_trimmed;

	a = 0;
	b = 0;
	c = 0;
	s1_len_trimmed = (ft_strlen(s1) - ft_count_set(s1, set));
	printf("%zu\n", s1_len_trimmed);
	newstr = ft_calloc((s1_len_trimmed +1),(sizeof(char)));
	if (newstr == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		while (set[b] != '\0')
		{
			while (s1[a] == set[b])
			{
				a++;
			}
			b++;
			a++;
			if(s1[a] == set[b])
				b++;
		}
	a++;
	b = 0;
	}
	newstr[c] = '\0';
	return (newstr);
}



static size_t	ft_count_set(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	char_to_trim;

	a = 0;
	b = 0;
	char_to_trim = 0;
	while (s1[a] != '\0')
	{
		while (s1[a] != set[b] && set[b] != '\0')
		{
			b++;
		}
		if (s1[a] == set[b])
		{
			char_to_trim++;
		}
		a++;
		b = 0;
	}
	return (char_to_trim);
}

int	main(void)
{
	char	*s1;
	char	*set;
	char	*trimmed;

	s1 = "hello world";
	set = "l";
	trimmed = ft_strtrim(s1, set);
	printf("Trimmed string: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}