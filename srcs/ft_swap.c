/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:19 by aniambon          #+#    #+#             */
/*   Updated: 2024/01/18 18:02:25 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (i == 0)
		if (write(1, "sa\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_sb(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (i == 0)
		if (write(1, "sb\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_ss(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (i == 0)
		if (write(1, "ss\n", 3) == -1)
			free_double_stack(a, b);
}
