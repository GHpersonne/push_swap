/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:30:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/19 16:20:01 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"

t_stack	*ft_laststack(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	add_to_stack(t_stack **stack, int n)
{
	t_stack	*stack_a;

	if (!stack)
		return ;
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		ft_error();
	stack_a->nb = n;
	stack_a->next = 0;
	if (!*stack)
		*stack = stack_a;
	else
		(ft_laststack(*stack))->next = stack_a;
}

t_stack	*args_in_stack_a(int argc, char **argv)
{
	long long	nb;
	t_stack		*stack_a;
	int			i;

	stack_a = 0;
	i = 1;
	nb = 0;
	while (i < argc)
	{
		check_digits(argv[i], &stack_a);
		nb = ft_atoi(argv[i]);
		check_limits(nb, &stack_a);
		add_to_stack(&stack_a, nb);
		i++;
	}
	return (stack_a);
}
