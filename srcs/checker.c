/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:40:24 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 18:13:14 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/get_next_line_bonus.h"
#include "../Libft/libft.h"

int	ft_cmp(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "pa\n", 3) == 0)
		ft_pa(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		ft_pb(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "sa\n", 3) == 0)
		ft_sa(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		ft_sb(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ft_ss(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ft_ra(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		ft_rb(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		ft_rr(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		ft_rra(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		ft_rrb(stack_a, stack_b, 0);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		ft_rrr(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

int	checker(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!ft_cmp(stack_a, stack_b, line))
		{
			free(line);
			free_double_stack(stack_a, stack_b, 1);
		}
		free(line);
		line = get_next_line(0);
	}
	if (*stack_b || !ft_is_sorted(*stack_a))
		return (free(line), 1);
	else
		return (free(line), 0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = args_in_stack_a(ac, av);
	if (!stack_a || check_double_numbers(stack_a))
	{
		free_stack(&stack_a);
		ft_error();
	}
	stack_b = 0;
	if (checker(&stack_a, &stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_double_stack(&stack_a, &stack_b, 0);
	return (0);
}
