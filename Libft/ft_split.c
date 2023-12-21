/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:26:12 by anjambon          #+#    #+#             */
/*   Updated: 2023/11/13 12:55:45 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	len_s;

	i = 0;
	len_s = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			len_s++;
		while (s[i] && !(s[i] == c))
			i++;
	}
	return (len_s);
}

static char	*create_word(const char *s, char c)
{
	int		i;
	int		len_word;
	char	*word;

	len_word = 0;
	while (s[len_word] && !(s[len_word] == c))
		len_word++;
	word = ft_calloc((len_word + 1), sizeof(char));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < len_word)
		word[i] = s[i];
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tab[j++] = create_word(&s[i], c);
			if (tab[j - 1] == NULL)
				return (free_all(tab));
		}
		while (s[i] && !(s[i] == c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
