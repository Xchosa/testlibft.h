/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:35:14 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 11:00:44 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atoi(const char *str)
{
	int	isneg;
	int	i;
	int	number;

	number = 0;
	i = 0;
	isneg = 1;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i++] == '-')
			isneg *= -1;
	}
	while (str[i] != '\0')
	{
		while (((str[i] >= 65) && str[i] <= 90) || ((str[i] >= 97)
				&& str[i] <= 122))
		{
			number = number + (str[i] + '0');
			i++;
		}
	}
	return (number * isneg)
}
int main()
{
	
}
