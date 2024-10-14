/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:22:36 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 15:16:23 by poverbec         ###   ########.fr       */
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
	while (len > i)
	{
		dstchar[i] = srcchar[i];
		i++;
	}
	return (dst);
}

#include <string.h>

int	main(void)
{
	char desttest[] = "hellozzz";
	char srctest[] = "worldnew";
	size_t len;
	len = 4;
	memmove(desttest, srctest, len);
	printf("Result %s", desttest);
	// memmove(desttest, srctest, len);
	// printf("Result %s", desttest);
}