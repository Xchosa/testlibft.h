/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:52:57 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 15:40:29 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
  strlcpy() copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0.

*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	isrc;

	i = 0;
	isrc = 0;

	if(dstsize)
	
	while (i < dstsize && src[isrc] != '\0')
	{
		dest[i] = src[isrc];
		isrc++;
		i++;
	}
	dest[i] = '\0';
	return (isrc);
}

// int	main(int argc, char **argv)
// {
// 	char a[100];
// 	if (argc == 2)
// 	{
// 		printf("%s\n empty", a);
// 		ft_strlcpy(a, argv[1]);
// 		printf("%s, after", a);
// 	}
// 	return (0);
// }