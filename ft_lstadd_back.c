/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:57:28 by poverbec          #+#    #+#             */
/*   Updated: 2024/12/03 11:14:14 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
Adds the node ’new’ at the end of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
