/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:30:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/02 00:06:10 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../Libft/libft.h"

t_stack	*ft_lstlast_for_add(t_stack *lst)
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

	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		ft_error();
	stack_a->nb = n;
	stack_a->next = 0;
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_a;
	else
		(ft_lstlast_for_add(*stack))->next = stack_a;
}

t_stack	*args_in_stack_a(int argc, char **argv)
{
	int				i;
	long long int	nb;
	t_stack			*stack_a;

	stack_a = 0;
	i = 1;
	while (i < argc)
	{
		check_digits(argv[i]);
		nb = ft_atoi(argv[i]);
		check_limits(nb);
		add_to_stack(&stack_a, nb);
		i++;
	}
	return (stack_a);
}
