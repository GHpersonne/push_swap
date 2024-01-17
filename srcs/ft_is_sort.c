/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 00:36:14 by aniambon          #+#    #+#             */
/*   Updated: 2024/01/17 15:35:09 by anjambon         ###   ########.fr       */
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
	t_stack	*tmp;

	i = 0;
	if (stack && stack->next)
	{
		while (stack && stack->next && stack->nb < stack->next->nb)
		{
			stack = stack->next;
			i++;
		}
		i++;
		tmp = stack->next;
		while (stack->next)
		{
			stack = stack->next;
			i++;
		}
		if (stack != tmp)
			return (-1);
	}
	else
		return (0);
	return (i);
}
