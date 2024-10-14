/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:48 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:05:03 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	char s[5] = "hello";
// 	int fd = 1;
// 	int i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// 	return (0);
// }