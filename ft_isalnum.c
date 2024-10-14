/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:29 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/10 15:24:49 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	isalnum(void) method returns True if all characters 
in the string are alphanumeric (either 
alphabets or numbers). If not, it returns False.
*/

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (a);
	}
	return (0);
}

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (a);
	}
	return (0);
}

int	ft_isalnum(int a)
{
	int	i;

	i = 0;
	if (ft_isdigit(a) != '\0' || (ft_isalpha(a) != '\0'))
	{
		return (1);
	}
	return (0);
}
