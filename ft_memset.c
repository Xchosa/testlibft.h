/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:49 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/28 12:33:30 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
The	memset(void) function writes len bytes of value c (converted to an
unsigned char) to the string b.
memset(void *b, int c, size_t len);
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = b;
	i = 0;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main(void)
// {
//     char str[50] = "Hello, World!"; // Initial string
//     printf("Original string: %s\n", str);

//     // Fill the first 5 bytes of str with 'X'
//     // ft_memset(str, 'X', 5);
// 	memset((str, 'X', 5));

// 	printf("%s",str);
// }