/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 17:30:32 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = args_in_stack_a(argc, argv);
	if (!stack_a || check_double_numbers(stack_a))
	{
		free_stack(&stack_a);
		ft_error();
	}
	if (!ft_is_sorted(stack_a))
		ft_sort(&stack_a);
	free_stack(&stack_a);
	return (0);
}
