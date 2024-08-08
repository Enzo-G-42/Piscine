/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:52:44 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/04 19:46:34 by aubarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUFFER_SIZE 1024

void	ft_write_nbr(char *buffer, int k)
{
	while (!(buffer[k] >= 'a' && buffer[k] <= 'z'))
		k++;
	while (buffer[k] != '\0')
	{
		write(1, &buffer[k], 1);
		k++;
	}
	write(1, " ", 1);
}

char	*ft_read_file(int fd, const char *search_str)
{
	char	buffer[BUFFER_SIZE];
	int		i;
	int		k;
	char	*found;

	k = 0;
	i = 0;
	while (read(fd, &buffer[i], 1) > 0)
	{
		if (buffer[i] == '\n' || i == BUFFER_SIZE - 1)
		{
			buffer[i] = '\0';
			found = ft_strstr(buffer, search_str);
			if (found)
			{
				ft_write_nbr(buffer, k);
				close(fd);
				return (found);
			}
			i = 0;
		}
		else
			i++;
	}
	return (0);
}

char	*search_and_print_line(const char *filename, const char *search_str)
{
	int		fd;
	char	*found;

	fd = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	found = ft_read_file(fd, search_str);
	close(fd);
	if (found)
		return (found);
	return (0);
}
