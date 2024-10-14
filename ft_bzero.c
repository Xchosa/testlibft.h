/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:39:56 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 11:07:58 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char *prt;
	size_t i;

	prt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		prt[i] = '\0';
		i++;
	}
}