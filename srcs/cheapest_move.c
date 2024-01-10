/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 01:04:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/10 01:06:24 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	i = ft_case_rrarrb_a(stack_a, stack_b, tmp->nb);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stack_a, stack_b, tmp->nb))
			i = ft_case_rarb_a(stack_a, stack_b, tmp->nb);
		if (i > ft_case_rrarrb_a(stack_a, stack_b, tmp->nb))
			i = ft_case_rrarrb_a(stack_a, stack_b, tmp->nb);
		if (i > ft_case_rarrb_a(stack_a, stack_b, tmp->nb))
			i = ft_case_rarrb_a(stack_a, stack_b, tmp->nb);
		if (i > ft_case_rrarb_a(stack_a, stack_b, tmp->nb))
			i = ft_case_rrarb_a(stack_a, stack_b, tmp->nb);
		tmp = tmp->next;
	}
	return (i);
}
