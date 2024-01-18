/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_pa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:47:28 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/18 21:10:28 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	rarb_for_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = index_a(stack_a, j);
	if (i < ft_find_index(stack_b, j))
		i = ft_find_index(stack_b, j);
	return (i);
}

int	rrarrb_for_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (index_a(stack_a, j))
		i = ft_real_lstsize(stack_a) - index_a(stack_a, j);
	if ((i < (ft_real_lstsize(stack_b) - ft_find_index(stack_b, j))) && ft_find_index(stack_b, j))
		i = ft_real_lstsize(stack_b) - ft_find_index(stack_b, j);
	return (i);
}

int	rarrb_for_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_b, j))
		i = ft_real_lstsize(stack_b) - ft_find_index(stack_b, j);
	i = index_a(stack_a, j) + i;
	return (i);
}

int	rrarb_for_a(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;

	i = 0;
	if (index_a(stack_a, j))
		i = ft_real_lstsize(stack_a) - index_a(stack_a, j);
	i = ft_find_index(stack_b, j) + i;
	return (i);
}
