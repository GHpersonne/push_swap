/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_pa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:47:28 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/16 01:25:00 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = ft_push_index_a(stack_a, j);
	if (i < ft_find_index(stack_b, j))
		i = ft_find_index(stack_b, j);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (ft_push_index_a(stack_a, j))
		i = ft_real_lstsize(stack_a) - ft_push_index_a(stack_a, j);
	if ((i < (ft_real_lstsize(stack_b) - ft_find_index(stack_b, j))) \
		&& ft_find_index(stack_b, j))
		i = ft_real_lstsize(stack_b) - ft_find_index(stack_b, j);
	return (i);
}

int	ft_case_rarrb_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_b, j))
		i = ft_real_lstsize(stack_b) - ft_find_index(stack_b, j);
	i = ft_push_index_a(stack_a, j) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (ft_push_index_a(stack_a, j))
		i = ft_real_lstsize(stack_a) - ft_push_index_a(stack_a, j);
	i = ft_find_index(stack_b, j) + i;
	return (i);
}
