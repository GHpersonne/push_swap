/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:28:38 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/02 00:09:10 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "stdlib.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
