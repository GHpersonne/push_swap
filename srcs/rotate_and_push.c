/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:50:42 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 15:47:07 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_rarb(t_stack **stack_a, t_stack **stack_b, int c, char d)
{
	if (d == 'a')
	{
		while ((*stack_a)->nb != c && index_b(*stack_b, c))
			ft_rr(stack_a, stack_b, 1);
		while ((*stack_a)->nb != c)
			ft_ra(stack_a, stack_b, 1);
		while (index_b(*stack_b, c))
			ft_rb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
	}
	else
	{
		while ((*stack_b)->nb != c && index_a(*stack_a, c))
			ft_rr(stack_a, stack_b, 1);
		while ((*stack_b)->nb != c)
			ft_rb(stack_a, stack_b, 1);
		while (index_a(*stack_a, c))
			ft_ra(stack_a, stack_b, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	return (-1);
}

int	do_rrarrb(t_stack **stack_a, t_stack **stack_b, int c, char d)
{
	if (d == 'a')
	{
		while ((*stack_a)->nb != c && index_b(*stack_b, c))
			ft_rrr(stack_a, stack_b, 1);
		while ((*stack_a)->nb != c)
			ft_rra(stack_a, stack_b, 1);
		while (index_b(*stack_b, c))
			ft_rrb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
	}
	else
	{
		while ((*stack_b)->nb != c && index_a(*stack_a, c))
			ft_rrr(stack_a, stack_b, 1);
		while ((*stack_b)->nb != c)
			ft_rrb(stack_a, stack_b, 1);
		while (index_a(*stack_a, c))
			ft_rra(stack_a, stack_b, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	return (-1);
}

int	do_rrarb(t_stack **stack_a, t_stack **stack_b, int c, char d)
{
	if (d == 'a')
	{
		while ((*stack_a)->nb != c)
			ft_rra(stack_a, stack_b, 1);
		while (index_b(*stack_b, c))
			ft_rb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
	}
	else
	{
		while (index_a(*stack_a, c))
			ft_rra(stack_a, stack_b, 1);
		while ((*stack_b)->nb != c)
			ft_rb(stack_a, stack_b, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	return (-1);
}

int	do_rarrb(t_stack **stack_a, t_stack **stack_b, int c, char d)
{
	if (d == 'a')
	{
		while ((*stack_a)->nb != c)
			ft_ra(stack_a, stack_b, 1);
		while (index_b(*stack_b, c))
			ft_rrb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
	}
	else
	{
		while (index_a(*stack_a, c))
			ft_ra(stack_a, stack_b, 1);
		while ((*stack_b)->nb != c)
			ft_rrb(stack_a, stack_b, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	return (-1);
}
