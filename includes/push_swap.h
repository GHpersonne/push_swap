/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/09 20:05:15 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nb;
	struct s_stack	*next;
}	t_stack;

void		check_limits(long long int nb, t_stack **stack_a);
void		check_digits(char *str, t_stack **stack_a);
int			check_double_numbers(t_stack *stack_a);
void		ft_error(void);

t_stack		*args_in_stack_a(int argc, char **argv);
void		free_stack(t_stack **stack_a);
t_stack		*ft_real_lstlast(t_stack *lst);
void		add_to_stack(t_stack **stack, int n);

int			ft_is_sorted(t_stack *stack_a);
int			ft_real_lstsize(t_stack *lst);
long		ft_min(t_stack *stack);
long		ft_max(t_stack *stack);

int			ft_find_index(t_stack *stack_a, int nb);

void		ft_sort(t_stack **stack_a);
void		ft_sort_three(t_stack **stack_a);

void		ft_pa(t_stack **a, t_stack **b, int j);
void		ft_pb(t_stack **a, t_stack **b, int j);

void		ft_sa(t_stack **a, int i);
void		ft_sb(t_stack **b, int i);
void		ft_ss(t_stack **a, t_stack **b, int i);

void		ft_ra(t_stack **a, int i);
void		ft_rb(t_stack **b, int i);

void		ft_rra(t_stack **a, int j);
void		ft_rrb(t_stack **b, int j);
void		ft_rrr(t_stack **a, t_stack **b, int j);

#endif