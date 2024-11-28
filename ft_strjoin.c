/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:22:34 by poverbec          #+#    #+#             */
/*   Updated: 2024/11/07 17:11:31 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	strlen_s1;
	size_t	strlen_s2;

	strlen_s1 = ft_strlen(s1);
	strlen_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	newstr = (char *)malloc(((strlen_s1 + strlen_s2 + 1) * (sizeof(char))));
	if (newstr == NULL)
		return (NULL);
	while (i < strlen_s1)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (j < strlen_s2)
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	const char *str1 = "hello";
// 	const char *str2 = "hella";
// 	char *joinstr;
// 	joinstr = ft_strjoin(str1, str2);
// 	printf("%s", joinstr);
// 	return (0);
// }