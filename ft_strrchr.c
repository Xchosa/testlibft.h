/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:39:06 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/21 15:19:19 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the functions
     locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located char-
     acter, or NULL if the character does not appear in the string.
	*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;
	char	b;

	b = (char)c;
	len = ft_strlen(s);
	str = (char *)s + len - 1;
	if (b == '\0')
		return (str + 1);
	while (*s)
	{
		if (*str == b)
		{
			return (str);
		}
		str--;
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*test;
// 	int		c;
// 	char	*result;
// 	char	*result2;

// 	test = "Hollo";
// 	c = 'o';
// 	result = ft_strrchr(test, c);
// 	printf("%p\n", result);
// 	result2 = strrchr(test, c);
// 	printf("%p", result2);
// }
