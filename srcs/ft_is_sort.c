/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 00:36:14 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/08 00:36:56 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_sort(t_stack *stack_a)
{
	int	i;

	i = stack_a->nb;
	while (stack_a)
	{
		if (i > stack_a->nb)
			return (0);
		i = stack_a->nb;
		stack_a = stack_a->next;
	}
	return (1);
}
