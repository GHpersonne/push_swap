/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjambon <anjambon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 00:47:01 by anjambon          #+#    #+#             */
/*   Updated: 2024/01/22 14:56:08 by anjambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_line(char *line)
{
	int		i;
	char	*temp;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	temp = malloc(sizeof(char) * (i + 1));
	if (!temp)
		return (free(line), NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		temp[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		temp[i] = line[i];
		i++;
	}
	temp[i] = '\0';
	return (free(line), temp);
}

void	ft_last_line(char *sav_buff)
{
	int		i;
	int		j;

	i = 0;
	while (sav_buff[i] && sav_buff[i] != '\n')
		i++;
	j = 0;
	if (sav_buff[i] == '\n')
		i++;
	while (sav_buff[i])
		sav_buff[j++] = sav_buff[i++];
	sav_buff[j] = '\0';
}

char	*ft_read_and_sav(int fd, char *sav_buff)
{
	char	*line;
	int		count;

	line = NULL;
	if (sav_buff[0] != '\0')
	{
		line = ft_strjoin_gnl(line, sav_buff);
		if (!line)
			return (NULL);
	}
	count = 1;
	while (!ft_strchr_gnl(sav_buff, '\n') && count > 0)
	{
		count = read(fd, sav_buff, BUFFER_SIZE);
		if (count < 0)
			return (free(line), sav_buff[0] = '\0', NULL);
		if ((count == 0 && sav_buff[0] == '\0'))
			return (free(line), NULL);
		sav_buff[count] = '\0';
		line = ft_strjoin_gnl(line, sav_buff);
		if (!line)
			return (NULL);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	sav_buff[1024][BUFFER_SIZE + 1];

	if (fd > 1024)
		return (NULL);
	line = ft_read_and_sav(fd, sav_buff[fd]);
	if (!line)
		return (sav_buff[fd][0] = '\0', NULL);
	line = ft_get_line(line);
	if (!line)
		return (sav_buff[fd][0] = '\0', NULL);
	ft_last_line(sav_buff[fd]);
	return (line);
}
