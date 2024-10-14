/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:36:43 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 15:51:35 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	int		isneg;
	int		len;

	isneg = 1 if (n < 0)
	{
		isneg *= -1;
	}
	return (isneg + nbr);
	nbr = (*char)malloc((len + isneg + 1) * (sizeof(int)));
	if (nbr == NULL)
	{
		return (NULL);
	}
	nbr[len + isneg];
	return nbr
}

char	ft_findlen(int len)
{
	char	*str;

	if (len > 9)
	{
		str++;
		len = ft_flindlen(len / 10)
	}
	return (str)
}

int	main(void)
{
	int n;
	char *str;

	n = -123;
	str = ft_itoa(n)
		printf("%s", str)
			free(nbr);
}