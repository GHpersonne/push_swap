/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:00 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/16 01:25:51 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"
#include <limits.h>

void	check_limits(long long nb, t_stack **stack_a)
{
	if (nb > INT_MAX || nb < INT_MIN)
	{
		free_stack(stack_a);
		ft_error();
	}
}

void	check_digits(char *str, t_stack **stack_a)
{
	int	i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			free_stack(stack_a);
			ft_error();
		}
		i++;
	}
}

int	check_double_numbers(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a->next;
	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (tmp->nb == stack_a->nb)
				return (1);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}
