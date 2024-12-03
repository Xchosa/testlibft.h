/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:36:28 by poverbec          #+#    #+#             */
/*   Updated: 2024/12/03 14:23:16 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
Iterates the list ’lst’ and applies the function ’f’ on 
the content of each node. Creates a new list 
resulting of the successive applications of the function ’f’.
 The ’del’ function is used to delete the content of a node if needed.

Return:
The new list.
NULL if the allocation fails.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head_list;
	void	*ptr;

	if (!lst)
		return (NULL);
	head_list = NULL;
	while (lst != NULL)
	{
		ptr = f(lst->content);
		new_node = ft_lstnew(ptr);
		if (new_node == NULL)
		{
			del(ptr);
			ft_lstclear(&head_list, del);
			return (NULL);
		}
		ft_lstadd_back(&head_list, new_node);
		lst = lst->next;
	}
	return (head_list);
}

// typedef struct s_list
// {	
// 	void			*content;
// 	struct s_list 	*next;
// }					t_list;