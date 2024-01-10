/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:48:21 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/10 01:06:57 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rarbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = ft_push_index_b(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}

int	rrarrbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_push_index_b(stack_b, c))
		i = ft_real_lstsize(stack_b) - ft_push_index_b(stack_b, c);
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
	i = ft_push_index_b(stack_b, c) + i;
	return (i);
}

int	rarrbsb(t_stack *stack_a, t_stack *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_push_index_b(stack_b, c))
		i = ft_real_lstsize(stack_b) - ft_push_index_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
