/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:48:21 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/17 15:35:09 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	rarbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = index_b(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}

int	rrarrbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = 0;
	if (index_b(stack_b, c))
		i = ft_real_lstsize(stack_b) - index_b(stack_b, c);
	if ((i < (ft_real_lstsize(stack_a) - ft_find_index(stack_a, c))) \
		&& ft_find_index(stack_a, c))
		i = ft_real_lstsize(stack_a) - ft_find_index(stack_a, c);
	return (i);
}

int	rrarbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_real_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = index_b(stack_b, c) + i;
	return (i);
}

int	rarrbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = 0;
	if (index_b(stack_b, c))
		i = ft_real_lstsize(stack_b) - index_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
