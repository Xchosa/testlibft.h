/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:14:56 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/16 17:35:55 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The C ctype library isalpha() function is 
used to check if a given character is an alphabetic 
letter or not. If argument 
c is not an alphabetic letter, the function returns 0 (false).
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	char a;
// 	if (argc == 2)
// 	{
// 		a = ft_isalpha(argv[1][0]);
// 		printf("%d", a);
// 	}
// 	return (0);
// }