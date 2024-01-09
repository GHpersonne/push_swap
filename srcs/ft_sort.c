/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:48:40 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/09 01:14:41 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->nb)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->nb)
	{
		ft_ra(stack_a, 0);
		if (!ft_is_sort(*stack_a))
			ft_sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_min(*stack_a)) == 1)
			ft_sa(stack_a, 0);
		else
			ft_rra(stack_a, 0);
	}
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = 0;
	if (ft_real_lstsize(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else if (ft_real_lstsize(*stack_a) == 3)
		ft_sort_three(stack_a);
}
