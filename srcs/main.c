/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:16:41 by anjambon          #+#    #+#             */
/*   Updated: 2023/12/22 18:34:49 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"

int	main(int argc, char **argv)
{
	if (check_input(argc, argv) == 0)
		ft_putstr_fd("Error\n", 0);
	else
		ft_putstr_fd("all good", 1);
	return (0);
}
