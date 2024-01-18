/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/18 20:32:54 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	if (!*b || !(*b)->next || !*a || !(*a)->next)
		return ;
	ft_rra(a, b, 1);
	ft_rrb(a, b, 1);
	if (j == 0)
		if (write(1, "rrr\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rrb(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
	if (j == 0)
		if (write(1, "rrb\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rra(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = 0;
	if (j == 0)
		if (write(1, "rra\n", 3) == -1)
			free_double_stack(a, b);
} */

void	ft_rrr_cont(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = 0;
	if (j == 0)
		write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		i++;
		*a = (*a)->next;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = 0;
	ft_rrr_cont(b, j);
}

void	ft_rrb(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = 0;
	if (j == 0)
		if (write(1, "rrb\n", 4) == -1)
			free_double_stack(a, b);
}

void	ft_rra(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = 0;
	if (j == 0)
		if (write(1, "rra\n", 4) == -1)
			free_double_stack(a, b);
}
