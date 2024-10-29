/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:54:35 by aguinea           #+#    #+#             */
/*   Updated: 2024/10/23 11:34:05 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_freejoin_bonus(char *buffer, char *buff)
{
	char	*f_buffer;

	f_buffer = ft_strjoin_bonus(buffer, buff);
	if (f_buffer == NULL)
	{
		free (buff);
		return (NULL);
	}
	free (buffer);
	return (f_buffer);
}

char	*read_byte_bonus(int fd, char *buff)
{
	char	*new_buff;
	int		byte_read;

	byte_read = 1;
	if (!buff)
		buff = ft_calloc_bonus(1, 1);
	new_buff = (char *)malloc((BUFFER_SIZE + 2) * sizeof(char));
	if (!new_buff)
	{
		free (buff);
		return (NULL);
	}
	while (byte_read > 0 && !ft_strchr_bonus(buff, '\n'))
	{
		byte_read = read(fd, new_buff, BUFFER_SIZE);
		if (byte_read < 0)
			return (free (buff), free (new_buff), NULL);
		new_buff[byte_read] = '\0';
		buff = ft_freejoin_bonus(buff, new_buff);
	}
	free (new_buff);
	return (buff);
}

char	*ft_rest_bonus(char *buffer)
{
	int		i;
	char	*rest;
	int		j;

	j = 0;
	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
		return (free(buffer), NULL);
	rest = (char *)malloc((ft_strlen_bonus(buffer) - i) + 1 * sizeof(char));
	if (!rest)
	{
		free(buffer);
		return (NULL);
	}
	while (buffer[++i])
		rest[j++] = buffer[i];
	rest[j] = '\0';
	return (free (buffer), rest);
}

char	*print_line_bonus(char *line)
{
	int		i;
	char	*f_line;
	int		j;

	i = 0;
	j = 0;
	if (line[i] == '\0')
		return (NULL);
	while (line[i] != '\n' && line[i])
		i++;
	f_line = (char *)malloc((i + 2) * sizeof(char));
	if (!f_line)
	{
		free (line);
		return (NULL);
	}
	while (j < i)
	{
		f_line[j] = line[j];
		j++;
	}
	if (line[j] == '\n')
		f_line[j++] = '\n';
	f_line[j] = '\0';
	return (f_line);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*f_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483646)
		return (NULL);
	buffer[fd] = read_byte_bonus(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	f_line = print_line_bonus(buffer[fd]);
	buffer[fd] = ft_rest_bonus(buffer[fd]);
	return (f_line);
}
