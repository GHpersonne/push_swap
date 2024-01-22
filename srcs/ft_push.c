/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:17 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 15:44:49 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, int true)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (true == 1)
		if (write(1, "pa\n", 3) == -1)
			free_double_stack(a, b, 1);
}

void	ft_pb(t_stack **a, t_stack **b, int true)
{
	t_stack	*tmp;

	if (!*a || !a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (true == 1)
		if (write(1, "pb\n", 3) == -1)
			free_double_stack(a, b, 1);
}
