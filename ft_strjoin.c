/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:22:34 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/17 16:54:07 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	strlen_s1;
	size_t	strlen_s2;
	size_t	sum;

	strlen_s1 = strlen(s1);
	strlen_s2 = strlen(s2);
	sum = strlen_s1 + strlen_s2;
	i = 0;
	newstr = (char *)malloc(((sum + 1) * (sizeof(char))));
	if (newstr == NULL)
		return (0);
	while (i < sum)
	{
		if (i <= strlen_s1)
			newstr[i] = s1[i];
		if (i >= strlen_s1)
			newstr[i] = s2[i - strlen_s1];
		i++;
	}
	return (newstr);
}
// int	main(void)
// {
// 	const char *str1 = "hello";
// 	const char *str2 = "hella";

// 	char *joinstr;
// 	joinstr = ft_strjoin(str1, str2);
// 	printf("%s", joinstr);

// 	return (0);
// }