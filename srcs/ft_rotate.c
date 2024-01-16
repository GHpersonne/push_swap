/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:18 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/16 01:25:18 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_real_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = 0;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	ft_ra(t_stack **a, int i)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_real_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = 0;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	if (!*b || !(*b)->next || !*a || !(*a)->next)
		return ;
	ft_ra(a, 1);
	ft_rb(b, 1);
	if (j == 0)
		write(1, "rr\n", 4);
}

