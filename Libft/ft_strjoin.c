/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:20 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:58:22 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	len;
	size_t	len1;

	len = ft_strlen(s1);
	len1 = ft_strlen(s2);
	ptr = malloc(len + len1 + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	ft_memcpy(ptr + len, s2, len1 + 1);
	return (ptr);
}
