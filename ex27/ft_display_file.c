/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:38:33 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/05 17:24:09 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 131072

void	ft_putchar(char c);

void	ft_display_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bread;

	while (1)
	{
		bread = read(fd, &buffer, BUFFER_SIZE);
		if (bread < 1)
			break ;
		write(1, &buffer, bread);
	}
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
