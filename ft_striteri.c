/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:26 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/16 15:35:48 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void f(unsigned int index, char *c)
// {
//         if (index % 2 == 0) // uppercase if index i is even
// 			*c = *c - 32;
// }

// int main()
// {
//     char str[] = "hello world";
// 	unsigned int test = 5;
//     ft_striteri(str, f);
//     printf("%s\n", str);  // Output: "HeLlO WoRlD"
//     return (0);
// }