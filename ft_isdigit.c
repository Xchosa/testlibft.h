/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:19:58 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/10 15:25:03 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
Function	isdigit(void) takes a
 single argument in the form 
of an integer and returns the 
value of type int.

Even though, isdigit() takes integer 
as an argument, character is passed to the
 function. Internally, the character 
 is converted to its ASCII value for the check.
 */
int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (a);
	}
	return (0);
}
