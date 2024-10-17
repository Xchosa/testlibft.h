/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:10:33 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/16 16:22:55 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_findlen(int n);

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;
	int		i;

	i = 0;
	len = ft_findlen(n);
	nbr = (char *)malloc((len + 1) * (sizeof(char)));
	if (nbr == NULL)
		return (NULL);
	if (n < 0)
	{
		nbr[i++] = '-';
		n = -n;
	}
	while (n > 0)
	{
		len--;
		nbr[len] = ((n % 10) + '0');
		n /= 10;
		i++;
	}
	return (nbr[i] = '\0', nbr);
}

size_t	ft_findlen(int n)
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

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = -12345;
// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	free(str);
// }
