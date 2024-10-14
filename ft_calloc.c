/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:08:42 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/14 17:03:30 by poverbec         ###   ########.fr       */
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

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*prt;
	size_t			i;

	prt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		prt[i] = '\0';
		i++;
	}
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
