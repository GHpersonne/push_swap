/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:43:09 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/18 21:14:04 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_stack *stack_a, int nb)
{
	int		i;

	i = 0;
	while (stack_a->nb != nb)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

int	index_a(t_stack *stack, int nb)
{
	int		i;

	if (nb < stack->nb && nb > ft_real_lstlast(stack)->nb)
		i = 0;
	else if (nb > ft_max(stack) || nb < ft_min(stack))
		i = ft_find_index(stack, ft_min(stack));
	else
	{
		i = 1;
		while (nb < stack->nb || nb > stack->next->nb)
		{
			stack = stack->next;
			i++;
		}
	}
	return (i);
}

int	index_b(t_stack *stack, int nb)
{
	int		i;

	if (nb > stack->nb && nb < ft_real_lstlast(stack)->nb)
		i = 0;
	else if (nb > ft_max(stack) || nb < ft_min(stack))
		i = ft_find_index(stack, ft_max(stack));
	else
	{
		i = 1;
		while (nb > stack->nb || nb < stack->next->nb)
		{
			stack = stack->next;
			i++;
		}
	}
	return (i);
}
