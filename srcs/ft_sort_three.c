/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:23:36 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/08 18:59:52 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*sort_three_args(t_stack *stack_a)
{
	while (ft_is_sort(stack_a))
	{
		if (stack_a->nb > stack_a->next->nb)
			ft_sa(&stack_a);
		else
			printf("false");
	}
	return (stack_a);
}
