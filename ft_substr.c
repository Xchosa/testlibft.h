/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:02:59 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 12:14:03 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subsubstr;
	size_t	strleng;
	int		i;

	i = 0;
	strleng = ft_strlen(s);
	if (start >= strleng)
		return (NULL);
	subsubstr = (char *)malloc((strleng + 1) * (sizeof(char)));
	if (subsubstr == NULL)
		return (NULL);
	while ((s[start] != '\0') && (start < len))
	{
		subsubstr[i] = s[start];
		i++;
		start++;
	}
	return (subsubstr);
}

int	main(void)
{
	int		start;
	char	*substring;
	char	*str;

	// char *testsub;
	str = "123test";
	start = '3';
	// testsub = substr(str, start, 9);
	substring = ft_substr(str, start, 9);
	printf("%s", substring);
}
