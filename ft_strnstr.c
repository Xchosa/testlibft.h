/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:06:09 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:17:09 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
  The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

*/
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
		if ((ft_strncmp(haystack + i, needle, needle_len) == 0))
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
// 	test3 = "Hollo";
// 	test4 = "Hollo";
// 	result = ft_strnstr(test3, test4, 6);
// 	printf("%c\n", *result);
// 	//result2 = strnstr(test3, test4, c);
// 	//printf("%p", result2);
// 	return (0);
// }
