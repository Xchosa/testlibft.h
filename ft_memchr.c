/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:31:19 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/18 15:04:25 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;
	unsigned char	cchar;

	str = (unsigned char *)s;
	cchar = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (str[index] == cchar)
		{
			return (&str[index]);
		}
		index++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "hello";
// 	int c = 'e';
// 	char *result;

// 	result = memchr(str, c, 10);
// 	return (0);
// }