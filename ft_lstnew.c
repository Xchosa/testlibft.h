/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:29:40 by poverbec          #+#    #+#             */
/*   Updated: 2024/11/28 10:33:00 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *node;
	
	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = 0;

	return(node);
	
	
}

