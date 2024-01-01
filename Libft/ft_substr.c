/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:21:35 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/10 18:53:44 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start,
size_t len)
{
	char	*substring;

	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (ft_strlen(str) - start < len)
		len = ft_strlen(str) - start;
	substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, str + start, len + 1);
	return (substring);
}
