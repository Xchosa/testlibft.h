/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:06:09 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/16 15:32:49 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = strlen(needle);
	i = 0;
	if (needle_len == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (i + needle_len <= len))
	{
		if ((strncmp(haystack, needle, len) == 0))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*test;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	int		c;
// 	char	*result;
// 	char	*result2;

// 	c = 5;
// 	test = "677Hollo";
// 	test2 = "lo";
// 	test3 = "664Hollo";
// 	test4 = "lo";
// 	result = ft_strnstr(test, test2, c);
// 	printf("%p\n", result);
// 	result2 = strnstr(test3, test4, c);
// 	printf("%p", result2);
// }
