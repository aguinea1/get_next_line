/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:00:47 by aguinea           #+#    #+#             */
/*   Updated: 2024/10/28 15:57:22 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*print_line(char *line);
char	*ft_rest(char *buffer);
char	*read_byte(int fd, char *buff);
char	*ft_freejoin(char *buffer, char *buff);
char	*ft_strjoin(char *buffer, char *buff);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *s);

#endif
