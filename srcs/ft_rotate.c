/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:18 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/18 20:53:24 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	ft_rb(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *b;
	*b = (*b)->next;
	tmp->next->next = NULL;
	if (i == 0)
		if (write(1, "rb\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_ra(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *a;
	*a = (*a)->next;
	tmp->next->next = NULL;
	if (i == 0)
		if (write(1, "ra\n", 3) == -1)
			free_double_stack(a, b);
}  */

/* void	ft_rr(t_stack **a, t_stack **b, int i)
{
	if (!*b || !(*b)->next || !*a || !(*a)->next)
		return ;
	ft_ra(a, b, 1);
	ft_rb(a, b, 1);
	if (i == 0)
		if (write(1, "rr\n", 3) == -1)
			free_double_stack(a, b);
} */

void	ft_ra(t_stack **a, t_stack **b, int i)
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
		if (write(1, "ra\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rb(t_stack **a, t_stack **b, int i)
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
		if (write(1, "rb\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	*a = ft_real_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = 0;
	tmp = *b;
	*b = ft_real_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = 0;
	if (i == 0)
		if (write(1, "rr\n", 3) == -1)
			free_double_stack(a, b);
}

