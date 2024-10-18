/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:22:36 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/18 15:06:07 by poverbec         ###   ########.fr       */
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
			i--;
			dstchar[i] = srcchar[i];
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	desttest[10] = "hellozzz";  // Use a character array
// 	char	srctest[10] = "world";      // Use a character array
// 	size_t	len;

// 	len = 4;
// 	ft_memmove(desttest, srctest, len);
// 	printf("Result eigene: %s\n", desttest);
	
// 	// Resetting desttest for original memmove test
// 	strcpy(desttest, "hellozzz");
	
// 	memmove(desttest, srctest, len);
// 	printf("Result original: %s\n", desttest);
// }
