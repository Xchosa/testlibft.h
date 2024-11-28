/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:30:53 by poverbec          #+#    #+#             */
/*   Updated: 2024/11/28 15:56:21 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
Counts the number of nodes in a list.
*/
int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (!lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
