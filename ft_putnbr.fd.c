/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:41:44 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/10 16:49:51 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	c;

	number = n;
	if (number < 0)
	{
		c = '-';
		write(fd, &c, 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	c = (number % 10) + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int n = -8441234;
// 	int fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }