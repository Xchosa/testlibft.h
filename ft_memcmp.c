/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:04:04 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:19:49 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1check;
	unsigned char	*s2check;
	size_t			i;

	i = 0;
	s1check = (unsigned char *)s1;
	s2check = (unsigned char *)s2;
	while (i < n)
	{
		if (s1check[i] != s2check[i])
			return ((s1check[i] - s2check[i]));
		i++;
	}
	return (0);
}
