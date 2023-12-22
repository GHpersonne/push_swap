/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:00 by anjambon          #+#    #+#             */
/*   Updated: 2023/12/22 18:34:16 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"
#include <limits.h>

int	check_input(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 1)
	{
		while (i <= argc)
		{
			if (!(ft_atoi(argv[i]) <= INT_MAX && ft_atoi(argv[i]) >= INT_MIN))
				return (ft_putstr_fd("false", 1), 0);
			i++;
		}
	}
	else
		return (1);
	return (0);
}
