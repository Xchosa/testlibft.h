/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:30:50 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:12:20 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	isprint(void) function tests for any printing character,
	including space (` ').  The value 
	of the argument must be representable as an unsigned
 char or the value of EOF.
*/

int	ft_isprint(int a)
{
	if (a >= 32 && a < 127)
	{
		return (a);
	}
	return (0);
}
