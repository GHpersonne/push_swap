/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:55 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:57:39 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char					*pdest;
	const unsigned char				*psrc;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (psrc < pdest)
		while (n--)
			pdest[n] = psrc[n];
	else
		while (n--)
			*pdest++ = *psrc++;
	return (dest);
}
