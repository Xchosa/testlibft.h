/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:49 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 10:55:54 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	memset(void) function writes len bytes of value c (converted to an
unsigned char) to the string b.
memset(void *b, int c, size_t len);
*/

char	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	while (i < len)
	{
		b++;
	}
	return (b);
}

