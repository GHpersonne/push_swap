/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:43:54 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/17 15:35:09 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_real_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

long	ft_min(t_stack *stack)
{
	long	i;

	i = stack->nb;
	while (stack)
	{
		if (i > stack->nb)
			i = stack->nb;
		stack = stack->next;
	}
	return (i);
}

long	ft_max(t_stack *stack)
{
	long	i;

	i = stack->nb;
	while (stack)
	{
		if (i < stack->nb)
			i = stack->nb;
		stack = stack->next;
	}
	return (i);
}
