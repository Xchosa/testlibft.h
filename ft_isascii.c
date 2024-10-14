/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:05 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/10 15:24:58 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	isascii(void) function tests for an ASCII character, 
which is any character between 0 and octal 0177 inclusive.
Non-zero if c is ascii, true 
zero if not. false
*/

int	ft_ascii(int a)
{
	if (a == 0)
	{
		return (1);
	}
	if (a > 0 && a <= 127)
	{
		return (a);
	}
	return (0);
}
