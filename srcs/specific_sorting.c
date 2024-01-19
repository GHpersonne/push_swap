/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:41:55 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/19 17:12:22 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_min(*stack_a) == (*stack_a)->nb)
	{
		ft_rra(stack_a, stack_b);
		ft_sa(stack_a);
	}
	else if (ft_max(*stack_a) == (*stack_a)->nb)
	{
		ft_ra(stack_a, stack_b);
		if (!ft_is_sorted(*stack_a))
			ft_sa(stack_a);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_min(*stack_a)) == 1)
			ft_sa(stack_a);
		else
			ft_rra(stack_a, stack_b);
	}
}
