/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:14:56 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:03:48 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The C ctype library isalpha() function is 
used to check if a given character is an alphabetic 
letter or not. If argument 
c is not an alphabetic letter, the function returns 0 (false).
*/
int	ft_isalpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (a);
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