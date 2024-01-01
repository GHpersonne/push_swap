/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:53 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:56:03 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static long int	ft_strtoll(const char *str)
{
	long			res;
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
}

int	ft_atoi(const char *str)
{
	return ((int)ft_strtoll(str));
}
