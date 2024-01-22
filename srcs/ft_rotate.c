/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:18 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 15:37:58 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (NULL == stack || NULL == *stack || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = (*stack)->next;
	while (first->next != NULL)
		first = first->next;
	first->next = *stack;
	*stack = second;
	first->next->next = NULL;
}

void	ft_ra(t_stack **a, t_stack **b, int true)
{
	rotate(a);
	if (true == 1)
		if (write(1, "ra\n", 3) == -1)
			free_double_stack(a, b, 1);
}

void	ft_rb(t_stack **a, t_stack **b, int true)
{
	rotate(b);
	if (true == 1)
		if (write(1, "rb\n", 3) == -1)
			free_double_stack(a, b, 1);
}

void	ft_rr(t_stack **a, t_stack **b, int true)
{
	rotate(a);
	rotate(b);
	if (true == 1)
		if (write(1, "rr\n", 3) == -1)
			free_double_stack(a, b, 1);
}

