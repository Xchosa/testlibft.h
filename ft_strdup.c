/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:20 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 15:22:58 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpys1;
	int		len;
	int		i;

	i = 0;
	len = strlen(s1);
	cpys1 = (char *)malloc((len + 1) * (sizeof(char)));
	if (cpys1 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		cpys1[i] = s1[i];
		i++;
	}
	cpys1[i] = '\0';
	return (cpys1);
}
