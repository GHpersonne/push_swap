/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:23 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:58:26 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;

	i = 0;
	len_src = 0;
	len_dest = 0;
	while (src[len_src])
		len_src++;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	while (src[i] && len_dest + i + 1 < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest < size)
		dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}
