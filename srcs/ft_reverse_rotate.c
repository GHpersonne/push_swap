/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/21 16:44:37 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*second_last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = ft_laststack(*stack);
	second_last = *stack;
	while (second_last->next != last)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = first;
	*stack = last;
}

void	ft_rra(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	if (write(1, "rra\n", 4) == -1)
		free_double_stack(a, b, 1);
}

void	ft_rrb(t_stack **a, t_stack **b)
{
	rev_rotate(b);
	if (write(1, "rrb\n", 4) == -1)
		free_double_stack(a, b, 1);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	if (write(1, "rrr\n", 4) == -1)
		free_double_stack(a, b, 1);
}
