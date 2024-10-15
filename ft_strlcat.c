/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:32:19 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/15 14:37:05 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
    strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	lendest;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	lendest = ft_strlen(dst);
	if (lendest > dstsize || dstsize == '\0')
	{
		return (1);
	}
	while (i < len)
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return (lendest + i);
}

// int	main(int argc, char **argv)
// {
// 	char	a[100];

// 	a[100] = "Hallo";
// 	if (argc == 2)
// 	{
// 		printf("%s\n", a);
// 		ft_strlcat(a, argv[1]);
// 		printf("%s", a);
// 	}
// 	return (0);
// }
