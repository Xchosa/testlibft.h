/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:02:07 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/22 15:30:11 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_findlen(long n);

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;
	int		i;
	long	n_long;

	n_long = (long)n;
	i = 0;
	len = ft_findlen(n_long);
	nbr = calloc((len + 1), (sizeof(char)));
	if (nbr == NULL)
		return (NULL);
	if (n_long == 0)
		return (nbr[0] = '0', nbr);
	if (n_long < 0)
	{
		nbr[i++] = '-';
		n_long = -n_long;
	}
	while (n_long > 0)
	{
		nbr[--len] = ((n_long % 10) + '0');
		n_long /= 10;
		i++;
	}
	return (nbr[i] = '\0', nbr);
}

size_t	ft_findlen(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n *= -1;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}
// int main()
// {
// 	char *str;
// 	str= ft_itoa(-2147483648);
// 	printf("%s", str);
// }