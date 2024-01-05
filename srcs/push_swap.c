/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/05 19:02:48 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = args_in_stack_a(argc, argv);
	if (!stack_a)
		return (0);
	while (stack_a)
	{
		printf("%ld\n", stack_a->nb);
		stack_a = stack_a->next;
	}
	free_stack(&stack_a);
	return (0);
}
