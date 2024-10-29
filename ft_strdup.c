/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:20 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/29 08:15:39 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
/*
The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

     The strndup() function copies at most n characters from the string s1
     always NUL terminating the copied string.
*/

char	*ft_strdup(const char *s1)
{
	char	*cpys1;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
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
