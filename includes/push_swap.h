/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/04 01:53:50 by anjambon         ###   ########.fr       */
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

void		check_limits(long long int nb);
void		check_digits(char *str);
void		ft_error(void);
t_stack		*args_in_stack_a(int argc, char **argv);
void		free_stack(t_stack **stack);
t_stack		*ft_real_lstlast(t_stack *lst);

#endif