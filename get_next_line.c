/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:07:34 by msulc             #+#    #+#             */
/*   Updated: 2023/02/27 14:07:39 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;
	char		*temp;

	if (BUFFER_SIZE < 1 || fd == -1)
		return (NULL);
	line = ft_read_func(fd, line);
	if (!line)
		return (NULL);
	temp = ft_the_line(line);
	line = ft_strdup_new(line);
	return (temp);
}

char	*ft_read_func(int fd, char *line)
{
	char	*buf;
	int		ret;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	ret = 1;
	while (ret != 0 && !ft_strchr(line, 10))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[ret] = '\0';
		line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
}

char	*ft_the_line(char *s)
{
	char	*my_line;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (i == 0)
		return (NULL);
	my_line = ft_strdup_yes(s);
	return (my_line);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	b;

	i = 0;
	b = (char)c;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == b)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
