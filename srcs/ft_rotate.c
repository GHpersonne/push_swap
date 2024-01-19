/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:43:18 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/19 00:46:13 by anjambon         ###   ########.fr       */
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

static void rotate(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if (NULL == stack || NULL == *stack || (*stack)->next == NULL)
        return;

    first = *stack;
    second = (*stack)->next;

    // Trouver le dernier élément
    while (first->next != NULL)
    {
        first = first->next;
    }

    // Effectuer la rotation
    first->next = *stack;
    *stack = second;
    first->next->next = NULL;
}

void	ft_ra(t_stack **a, t_stack **b, int i)
{
	rotate(a);
	if (i == 0)
		if (write(1, "ra\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rb(t_stack **a, t_stack **b, int i)
{
	rotate(b);
	if (i == 0)
		if (write(1, "rb\n", 3) == -1)
			free_double_stack(a, b);
}

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	rotate(a);
	rotate(b);
	if (i == 0)
		if (write(1, "rr\n", 3) == -1)
			free_double_stack(a, b);
}

