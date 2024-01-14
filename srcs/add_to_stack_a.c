/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:30:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/14 15:16:27 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../Libft/libft.h"

/* long long	ft_atoi_test(const char *str)
{
	long long		res;
	unsigned long	i;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
 		if (res != (res * 10 + str[i] - '0') / 10)
		{
			if (sign == -1)
				return (LONG_MIN);
			return (LONG_MAX);
		}
		res = (res * 10) + (str[i++] - '0');
	}
	return (res * sign);
} */

t_stack	*ft_real_lstlast(t_stack *lst)
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
		(ft_real_lstlast(*stack))->next = stack_a;
}

t_stack	*args_in_stack_a(int argc, char **argv)
{
	long long			nb;
	t_stack			*stack_a;
	int				i;

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
