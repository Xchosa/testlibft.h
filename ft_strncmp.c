/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:40:37 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:09:04 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
     equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index <= n)
	{
		if ((s1[index] != '\0') || (s2[index] != '\0'))
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
int	main(void)
{
	const char *str1 = "hello";
	const char *str2 = "hella";
	size_t u = 4;

	int result = ft_strncmp(str1, str2, u);
		printf("The strings are equal up to %ld characters.\n", u);
	else if (result < 0)
		printf("str1 is less than str2.\n");
	else
		printf("str1 is greater than str2.\n");

	return (0);
}