/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:00 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/07 20:20:35 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../Libft/libft.h"
#include <limits.h>

void	check_limits(long long int nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
		ft_error();
}

void	check_digits(char *str)
{
	int	i;

	i = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		i++;
	}
}

void	double_numbers(t_stack *stack_a)
{
	t_stack	*tmp;

	tmp = stack_a->next;
	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (tmp->nb == stack_a->nb)
			{
				free_stack(&stack_a);
				ft_error();
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
}
