/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:32:54 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:10:53 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
 The toupper() function converts a lower-case letter to the corresponding
     upper-case letter.  The argument must be representable as an unsigned char
     or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l()
     function may be passed a locale directly. See xlocale(3) for more informa-
     tion.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns the
     corresponding upper-case letter if there is one; otherwise, the argument
     is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int main(int argc, char **argv)
// {
//     int a;
//     if (argc == 2)
//     {
//         a = ft_toupper(argv[1][0]);
//         printf("%c", a);
//     }
//     return (0);
// }