/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:53:53 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/10 18:02:42 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	void	*clear(t_list *lst, void *current, void (*del)(void *))
{
	ft_lstclear(&lst, del);
	free(current);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*new;
	void	*current;

	if (lst)
	{
		current = f(lst->content);
		begin = ft_lstnew(current);
		if (!begin)
			return (clear(begin, current, del));
		lst = lst->next;
		while (lst)
		{
			current = f(lst->content);
			new = ft_lstnew(current);
			if (!new)
				return (clear(begin, current, del));
			ft_lstadd_back(&begin, new);
			lst = lst->next;
		}
		return (begin);
	}
	return (NULL);
}
