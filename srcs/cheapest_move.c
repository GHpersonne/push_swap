/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:04:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/17 15:35:09 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	cheapest_rotate_b(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = stack_a;
	i = rrarrbsb(stack_a, stack_b, tmp->nb);
	while (tmp)
	{
		if (i > rarbsb(stack_a, stack_b, tmp->nb))
			i = rarbsb(stack_a, stack_b, tmp->nb);
		if (i > rrarrbsb(stack_a, stack_b, tmp->nb))
			i = rrarrbsb(stack_a, stack_b, tmp->nb);
		if (i > rarrbsb(stack_a, stack_b, tmp->nb))
			i = rarrbsb(stack_a, stack_b, tmp->nb);
		if (i > rrarbsb(stack_a, stack_b, tmp->nb))
			i = rrarbsb(stack_a, stack_b, tmp->nb);
		tmp = tmp->next;
	}
	return (i);
}

int	cheapest_rotate_a(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = stack_b;
	i = rrarrb_for_a(stack_a, stack_b, tmp->nb);
	while (tmp)
	{
		if (i > rarb_for_a(stack_a, stack_b, tmp->nb))
			i = rarb_for_a(stack_a, stack_b, tmp->nb);
		if (i > rrarrb_for_a(stack_a, stack_b, tmp->nb))
			i = rrarrb_for_a(stack_a, stack_b, tmp->nb);
		if (i > rarrb_for_a(stack_a, stack_b, tmp->nb))
			i = rarrb_for_a(stack_a, stack_b, tmp->nb);
		if (i > rrarb_for_a(stack_a, stack_b, tmp->nb))
			i = rrarb_for_a(stack_a, stack_b, tmp->nb);
		tmp = tmp->next;
	}
	return (i);
}
