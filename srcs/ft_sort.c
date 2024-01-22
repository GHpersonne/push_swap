/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:48:40 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 15:49:15 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_circle_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) / 2 > ft_find_index(*stack_a, \
		ft_min(*stack_a)))
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_ra(stack_a, stack_b, 1);
	else
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_rra(stack_a, stack_b, 1);
}

void	ft_sort_push_b(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack_a;
	i = cheapest_rotate_b(*stack_a, *stack_b);
	while (i >= 0)
	{
		if (i == rarbsb(*stack_a, *stack_b, tmp->nb))
			i = do_rarb(stack_a, stack_b, tmp->nb, 'a');
		else if (i == rrarrbsb(*stack_a, *stack_b, tmp->nb))
			i = do_rrarrb(stack_a, stack_b, tmp->nb, 'a');
		else if (i == rarrbsb(*stack_a, *stack_b, tmp->nb))
			i = do_rarrb(stack_a, stack_b, tmp->nb, 'a');
		else if (i == rrarbsb(*stack_a, *stack_b, tmp->nb))
			i = do_rrarb(stack_a, stack_b, tmp->nb, 'a');
		else
			tmp = tmp->next;
	}
}

void	ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = cheapest_rotate_a(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb_for_a(*stack_a, *stack_b, tmp->nb))
				i = do_rarb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == rarrb_for_a(*stack_a, *stack_b, tmp->nb))
				i = do_rarrb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == rrarrb_for_a(*stack_a, *stack_b, tmp->nb))
				i = do_rrarrb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == rrarb_for_a(*stack_a, *stack_b, tmp->nb))
				i = do_rrarb(stack_a, stack_b, tmp->nb, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = 0;
	if (ft_stack_size(*stack_a) == 2)
		ft_sa(stack_a, &stack_b, 1);
	else if (ft_stack_size(*stack_a) == 3)
		ft_sort_three(stack_a, &stack_b);
	else
	{
		if (check_circle_sort(*stack_a) == ft_stack_size(*stack_a))
			ft_circle_sort(stack_a, &stack_b);
		else
		{
			ft_pb(stack_a, &stack_b, 1);
			if (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
				ft_pb(stack_a, &stack_b, 1);
			while (ft_stack_size(*stack_a) > 3 && !ft_is_sorted(*stack_a))
				ft_sort_push_b(stack_a, &stack_b);
			if (ft_stack_size(*stack_a) == 3 && !ft_is_sorted(*stack_a))
				ft_sort_three(stack_a, &stack_b);
			ft_sort_a(stack_a, &stack_b);
		}
	}
	ft_circle_sort(stack_a, &stack_b);
}
