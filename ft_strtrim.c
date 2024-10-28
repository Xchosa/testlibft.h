/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:53:31 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 16:17:42 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_in_set_start(char const *s1, char const *set);
static size_t	ft_in_set_end(char const *s1, char const *set, size_t s1_len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;
	size_t	s1_len;
	size_t	i;

	i = 0;
	s1_len = ft_strlen(s1);
	start = ft_in_set_start(s1, set);
	end = ft_in_set_end(s1, set, s1_len);
	if (!s1 || !set)
		return (ft_strdup(""));
	if (s1_len == 0)
		return (ft_strdup(""));
	if (start > end)
		return (ft_strdup(""));
	newstr = ft_calloc((end - start + 2), (sizeof(char)));
	if (newstr == NULL)
		return (NULL);
	while (start <= end)
		newstr[i++] = s1[start++];
	return (newstr);
}

static size_t	ft_in_set_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	while (s1[start] != '\0' && set[i] != '\0')
	{
		if (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

static size_t	ft_in_set_end(char const *s1, char const *set, size_t s1_len)
{
	size_t	end;
	size_t	i;

	i = 0;
	if (s1_len == 0)
		return (end = 0, end);
	end = s1_len - 1;
	while (s1[end] != '\0' && set[i] != '\0' && end > 0)
	{
		if (s1[end] == set[i])
		{
			i = 0;
			end--;
		}
		else
			i++;
	}
	return (end);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*trimmed;

// 	s1 = "";
// 	set = "";
// 	trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string: '%s'\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }
