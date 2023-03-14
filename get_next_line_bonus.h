/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:42:19 by msulc             #+#    #+#             */
/*   Updated: 2023/03/13 15:42:27 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

/* get_next_line_bonus.c */
char	*get_next_line(int fd);
char	*ft_read_func(int fd, char *line);
char	*ft_the_line(char *s);
char	*ft_strchr(const char *s, int c);

/* get_next_line_utils_bonus.c */
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup_yes(const char *s);
char	*ft_strdup_new(const char *s);
char	*ft_new_s1(void);

#endif
