/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:48:40 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/12 00:42:09 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_circle_sort(t_stack **stack_a)
{
	if (ft_real_lstsize(*stack_a) / 2 > ft_find_index(*stack_a, \
		ft_min(*stack_a)))
	{
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_ra(stack_a, 0);
	}
	else
	{
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_rra(stack_a, 0);
	}
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
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->nb))
				i = do_rarb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->nb))
				i = do_rarrb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->nb))
				i = do_rrarrb(stack_a, stack_b, tmp->nb, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->nb))
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
	if (ft_real_lstsize(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else if (ft_real_lstsize(*stack_a) == 3)
		ft_sort_three(stack_a);
	else
	{
		if (check_circle_sort(*stack_a) == ft_real_lstsize(*stack_a))
			ft_circle_sort(stack_a);
		else
		{
			ft_pb(stack_a, &stack_b, 0);
			if (ft_real_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
				ft_pb(stack_a, &stack_b, 0);
			while (ft_real_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
				ft_sort_push_b(stack_a, &stack_b);
			if (ft_real_lstsize(*stack_a) == 3 && !ft_is_sorted(*stack_a))
				ft_sort_three(stack_a);
			ft_sort_a(stack_a, &stack_b);
		}
	}
	ft_circle_sort(stack_a);
}
