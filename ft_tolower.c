/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:58:51 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:11:43 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The tolower() function converts an upper-case letter to the corresponding
     lower-case letter.  The argument must be representable as an unsigned char
     or the value of EOF.

     Although the tolower() function uses the current locale, the tolower_l()
     function may be passed a locale directly. See xlocale(3) for more informa-
     tion.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns
     the corresponding lower-case letter if there is one; otherwise, the argu-
     ment is returned unchanged.

*/
#include "./libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		int *a = ft_tolower(argv[1][0]);
// 		printf("%c", a);
// 	}
// }