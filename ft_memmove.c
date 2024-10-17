/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:22:36 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 15:28:34 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstchar;
	unsigned char	*srcchar;
	size_t			i;

	dstchar = (unsigned char *)dst;
	srcchar = (unsigned char *)src;
	i = 0;
	if (dstchar < srcchar)
	{
		while (len > i)
		{
			dstchar[i] = srcchar[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			dstchar[i] = srcchar[i];
			i--;
		}
	}
	return (dst);
}

// #include <string.h>

// int	main(void)
// {
// 	char	desttest[];
// 	char	srctest[];
// 	size_t	len;

// 	desttest[] = "hellozzz";
// 	srctest[] = "world";
// 	len = 4;
// 	ft_memmove(desttest, srctest, len);
// 	printf("Result eigene %s\n", desttest);
// 	memmove(desttest, srctest, len);
// 	printf("Result original %s", desttest);
// }
