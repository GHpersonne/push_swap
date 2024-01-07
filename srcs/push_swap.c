/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:16 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/08 00:50:03 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b = NULL;
	t_stack *tmp_a = NULL;
	t_stack *tmp_b = NULL;

	stack_a = args_in_stack_a(argc, argv);
	if (!stack_a)
		return (0);
	if (!check_double_numbers(stack_a))
	{
		free_stack(&stack_a);
		ft_error();
	}
//	if (!ft_is_sort(&stack_a))
		//ft_sort
	add_to_stack(&stack_b, 2);
	add_to_stack(&stack_b, 3);
	add_to_stack(&stack_b, 4);
	tmp_a = stack_a;
	tmp_b = stack_b;

	printf("------- Avant A -----\n");
	while (stack_a)
	{
		printf("   %ld\n  ", stack_a->nb);
		stack_a = stack_a->next;
	}
	printf("---------------------\n");
	stack_a = tmp_a;

	printf("------- Avant B -----\n");
	while (stack_b)
	{
		printf("   %ld\n  ", stack_b->nb);
		stack_b = stack_b->next;
	}
	printf("---------------------\n");
	stack_b = tmp_b;

/* 	ft_rb(&stack_b, 0);
	ft_ra(&stack_a, 0); 
	ft_rrr(&stack_a, &stack_b, 0);*/

	printf("------- Apres A -----\n");
	while (stack_a)
	{
		printf("   %ld\n  ", stack_a->nb);
		stack_a = stack_a->next;
	}
	printf("---------------------\n");

	printf("------- Apres B -----\n");
	while (stack_b)
	{
		printf("   %ld\n  ", stack_b->nb);
		stack_b = stack_b->next;
	}
	printf("---------------------\n");

	free_stack(&stack_b);
	free_stack(&stack_a);
	return (0);
}
