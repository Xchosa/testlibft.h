/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:08:42 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/19 22:02:42 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = count * size;
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, i);
	return (ptr);
}
// int	main(void)
// {
// 	size_t	test1;
// 	size_t	test2;
// 	char	*testpointer;

// 	test1 = 9;
// 	test2 = 3;
// 	testpointer = calloc(test1, test2);
// 	while (testpointer == '\0')
// 	{
// 		printf("nullen %s", testpointer);
// 	}
// 	return (0);
// }
