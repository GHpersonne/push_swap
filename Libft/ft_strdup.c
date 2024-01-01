/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:16 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:58:14 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tab;

	tab = malloc(ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (s[++i])
		tab[i] = s[i];
	tab[i] = '\0';
	return (tab);
}
