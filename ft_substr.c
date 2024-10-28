/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:02:59 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 13:57:15 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subsubstr;
	size_t	strleng;
	size_t	i;

	i = 0;
	strleng = ft_strlen(s);
	if (start > strleng)
	{
		subsubstr = ft_calloc(1, sizeof(char));
		return (subsubstr);
	}
	if (len > strleng - start)
		len = strleng - start;
	subsubstr = ft_calloc((len + 1), (sizeof(char)));
	if (subsubstr == NULL)
		return (NULL);
	while ((s[start] != '\0') && (i < len))
	{
		subsubstr[i] = s[start];
		i++;
		start++;
	}
	return (subsubstr);
}
// int	main(void)
// {
// 	char	*substring;
// 	char	*str;

// 	// char *testsub;
// 	str = "";
// 	// testsub = substr(str, start, );
// 	substring = ft_substr(str, 1,1);
// 	printf("%s", substring);
// }
