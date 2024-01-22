/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:41:55 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 15:49:49 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack_a, t_stack **stack_b)
{
	if (((*stack_a)->nb > (*stack_a)->next->next->nb) && \
		(*stack_a)->nb > (*stack_a)->next->nb)
		ft_ra(stack_a, stack_b, 1);
	else if ((*stack_a)->next->nb > (*stack_a)->next->next->nb)
		ft_rra(stack_a, stack_b, 1);
	if ((*stack_a)->nb > (*stack_a)->next->nb)
		ft_sa(stack_a, stack_b, 1);
}
