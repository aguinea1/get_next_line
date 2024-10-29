/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:13:05 by aguinea           #+#    #+#             */
/*   Updated: 2024/10/23 11:10:35 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen_bonus(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc_bonus(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);
	ft_bzero_bonus(array, nmemb * size);
	return (array);
}

char	*ft_strchr_bonus(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

void	ft_bzero_bonus(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

char	*ft_strjoin_bonus(char *buffer, char *buff)
{
	int		i;
	int		n;
	int		p;
	int		d;
	char	*s3;

	if (!buff || !buffer)
		return (NULL);
	i = ft_strlen_bonus(buffer);
	n = ft_strlen_bonus(buff);
	s3 = (char *)malloc(sizeof(char) * (i + n + 1));
	if (!s3)
		return (NULL);
	p = -1;
	while (i > ++p)
		s3[p] = buffer[p];
	d = -1;
	while (n > ++d)
	{
		s3[p + d] = buff[d];
	}
	s3[p + d] = '\0';
	return (s3);
}
