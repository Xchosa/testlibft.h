/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:32:12 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:27:57 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*newstr;

	len = (unsigned int)ft_strlen(s);
	i = 0;
	newstr = (char *)malloc((len + 1) * (sizeof(char)));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// char	f(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 	{
// 		return (c += 32);
// 	}
// 	return (c);
// }

// int	main(void)
// {
// 	char			str[];
// 	unsigned int	test;
// 	char			*newstr;

// 	str[] = "hello world";
// 	test = 5;
// 	newstr = ft_strmapi(str, f);
// 	printf("%s\n", str);
// 	free(newstr);
// 	return (0);
// }

// Applies the function f to each character
//  of the string s, passing its index as the
//  first argument and the character itself as the second.
//   A new string is created
// (using malloc(3)) to collect the results from the successive
// applications of f
