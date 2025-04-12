/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber@student.42prague.com <cstirber    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:52:44 by cstirber@st       #+#    #+#             */
/*   Updated: 2024/11/28 13:54:32 by cstirber@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

static char	*fill_line(int fd, char *left, char *buffer)
{
	char	*tmp;
	ssize_t	bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(left), left = NULL, NULL);
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!left)
			left = ft_strdup("");
		tmp = left;
		left = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left);
}

static char	*set_line(char **left)
{
	ssize_t	x;
	char	*line;
	char	*tmp;

	x = 0;
	while ((*left)[x] && (*left)[x] != '\n')
		x++;
	if ((*left)[x] == '\0')
	{
		line = ft_strdup(*left);
		free(*left);
		*left = NULL;
		return (line);
	}
	line = ft_substr(*left, 0, x + 1);
	tmp = ft_strdup(*left + x + 1);
	free(*left);
	*left = tmp;
	if (**left == '\0')
	{
		free(*left);
		*left = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*left;
	char		*buffer;
	char		*line;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || !buffer)
	{
		free(left);
		free(buffer);
		left = NULL;
		buffer = NULL;
		return (NULL);
	}
	left = fill_line(fd, left, buffer);
	free(buffer);
	buffer = NULL;
	if (!left)
		return (NULL);
	line = set_line(&left);
	return (line);
}
// int	main(void)
// {
// 	char *line;
// 	int fd;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("new line: %s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }