/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:27:49 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 11:47:35 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putnbr_fd(int n, int fd);
int	ft_strlen( char *str);
int	*ft_toupper(int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
