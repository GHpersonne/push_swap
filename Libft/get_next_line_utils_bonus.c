/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 00:47:14 by anjambon          #+#    #+#             */
/*   Updated: 2023/12/20 18:15:21 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = -1;
	if ((char)c == '\0')
		return (&s[ft_strlen(s)]);
	while (s[++i])
		if (s[i] == (char)c)
			return (&s[i]);
	return (NULL);
}

void	*ft_memmove(char *dest, char *src, size_t n)
{
	size_t			i;
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	i = -1;
	if (src < dest)
	{
		while (n--)
			dest_cpy[n] = src_cpy[n];
		return (dest);
	}
	else
		while (++i < n)
			dest_cpy[i] = src_cpy[i];
	dest_cpy[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *s, int bool)
{
	char	*temp;
	size_t	len;

	len = ft_strlen(s) + 1;
	temp = malloc(sizeof(char) * len);
	if (!temp)
		return (NULL);
	temp = ft_memmove(temp, s, len);
	if (bool == 1)
		free(s);
	return (temp);
}

char	*ft_strjoin(char *line, char *sav_buff)
{
	size_t	all_len;
	char	*temp;

	if (line)
		all_len = ft_strlen(line) + ft_strlen(sav_buff);
	else
		all_len = ft_strlen(sav_buff);
	temp = malloc(sizeof(char) * all_len + 1);
	if (!temp)
		return (free(line), sav_buff[0] = '\0', NULL);
	if (line)
	{
		ft_memmove(temp, line, ft_strlen(line));
		ft_memmove(temp + ft_strlen(line), sav_buff, ft_strlen(sav_buff));
	}
	else
		ft_memmove(temp, sav_buff, ft_strlen(sav_buff));
	temp[all_len] = '\0';
	if (line)
		free(line);
	return (temp);
}
