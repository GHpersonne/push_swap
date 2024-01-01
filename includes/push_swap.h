/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:19 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/01 23:55:02 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	long	nb;
	void	*next;
}	t_stack;

void		check_limits(long long int nb);
void		check_digits(char *str);
void		ft_error(void);
t_stack		*args_in_stack_a(int argc, char **argv);
void		free_stack(t_stack **stack);

#endif