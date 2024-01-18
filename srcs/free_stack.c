/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:46:36 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/18 17:19:05 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!stack_a)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
}

void	free_double_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_a)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
	if (!stack_b)
		return ;
	while (*stack_b)
	{
		tmp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tmp;
	}
	ft_error();
}
