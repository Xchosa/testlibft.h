/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:49 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/16 16:31:04 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	memset(void) function writes len bytes of value c (converted to an
unsigned char) to the string b.
memset(void *b, int c, size_t len);
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)c;
	i = 0;
	while (i < len)
	{
		b++;
	}
	return(b);
}
