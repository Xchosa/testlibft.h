/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:24:55 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:32:28 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
DESCRIPTION
     The memcpy() function copies n bytes from memory area 
		src to memory area dst.  
		If dst and src overlap,
	behavior is unde-
     fined.  Applications in which dst and src might overlap 
		should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*destnew;
	unsigned char	*srcnew;
	size_t			i;

	destnew = (unsigned char *)dst;
	srcnew = (unsigned char *)src;
	i = 0;
	if (destnew == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		destnew[i] = srcnew[i];
		i++;
	}
	return (destnew);
}
