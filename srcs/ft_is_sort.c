/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 00:36:14 by aniambon          #+#    #+#             */
/*   Updated: 2024/01/19 17:41:35 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_is_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nb;
	while (stack_a)
	{
		if (i > stack_a->nb)
			return (0);
		i = stack_a->nb;
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_circle_sort(t_stack *stack)
{
	int		i;

	i = 0;
	if (stack && stack->next)
	{
		while (stack && stack->next && stack->nb < stack->next->nb)
		{
			stack = stack->next;
			i++;
		}
		i++;
		stack = stack->next;
		while (stack && stack->next && stack->nb < stack->next->nb)
		{
			stack = stack->next;
			i++;
		}
		i++;
	}
	else
		return (0);
	return (i);
}
