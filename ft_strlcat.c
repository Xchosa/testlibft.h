/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:32:19 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:16:22 by poverbec         ###   ########.fr       */
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
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (srclen);
	if (dstlen >= dstsize)
	{
		return (dstsize + srclen);
	}
	while ((dstlen + i < dstsize - 1) && (src[i] != '\0'))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// dst[i]

// while(dstsize[--i])

// p
// // return (dstlen + (srclen-i));// what they tried to concatenate
// srclen - the actual copied amout of characters taken
// while ((dstsize > 1) && (src[i] != '\0'))
// 	{
// 		dst[dstlen] = src[i];
// 		dstsize--;
// 		dstlen++;
// 		i++;
//