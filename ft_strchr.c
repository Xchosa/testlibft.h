/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:21:14 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/24 14:51:02 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
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

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	while (*s)
	{
		if (b == *s)
		{
			return ((char *)s);
		}
		s++;
	}
	if (b == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	char *result;
// 	char c;
// 	c = '4';

// 	if (argc == 2)
// 	{
// 		result = ft_strchr(argv[1], c);
// 		printf("%c", result);
// 	}
// 	return (0);
// }