/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:40:24 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/21 16:46:02 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"

int	ft_cmp(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "pa\n", 3))
		ft_pa(stack_a, stack_b);
	else if (ft_strncmp(line, "pb\n", 3))
		ft_pb(stack_a, stack_b);
	else if (ft_strncmp(line, "sa\n", 3))
		ft_sa(stack_a);
	else if (ft_strncmp(line, "sb\n", 3))
		ft_sb(stack_b);
	else if (ft_strncmp(line, "ss\n", 3))
		ft_ss(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3))
		ft_ra(stack_a, stack_b);
	else if (ft_strncmp(line, "rb\n", 3))
		ft_rb(stack_a, stack_b);
	else if (ft_strncmp(line, "rr\n", 3))
		ft_rr(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n", 4))
		ft_rra(stack_a, stack_b);
	else if (ft_strncmp(line, "rrb\n", 4))
		ft_rrb(stack_a, stack_b);
	else if (ft_strncmp(line, "rrr\n", 4))
		ft_rrr(stack_a, stack_b);
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
	if (*stack_b || !ft_is_sorted(stack_a))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
	free(line);
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
	checker(stack_a, stack_b);
	free_double_stack(stack_a, stack_b, 0);
	return (0);
}
