/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:06:09 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/15 14:44:02 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle == NULL)
		return ((char *)haystack);
	while (haystack != '\0)' || i <= len)
	{
		if (haystack[i] == needle[i])
		{
			return ((char *)&haystack[i]);
		}
		return (NULL);
	}
}
int	main(void)
{
	char	*test;
	char	*test2;
	int		c;
	char	*result;
	char	*result2;

	test = "Hollo";
	test2 = "lo";
	result = ft_strnstr(test, test2, 5);
	printf("%p\n", result);
	result2 = strrchr(test, c);
	printf("%p", result2);
}
