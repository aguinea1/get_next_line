/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:53:41 by aguinea           #+#    #+#             */
/*   Updated: 2024/10/27 14:45:10 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strchr_bonus(const char *s, int c);
void	*ft_calloc_bonus(size_t nmemb, size_t size);
char	*print_line_bonus(char *line);
char	*ft_rest_bonus(char *buffer);
char	*read_byte_bonus(int fd, char *buff);
char	*ft_freejoin_bonus(char *buffer, char *buff);
char	*ft_strjoin_bonus(char *buffer, char *buff);
void	ft_bzero_bonus(void *s, size_t n);
int		ft_strlen_bonus(char *s);

#endif
