/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:11:40 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/05/27 03:23:49 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	total_length;

	total_length = 0;
	while (str[total_length] != '\0')
		total_length++;
	return (total_length);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_error(int argc)
{
	char	*error;

	if (argc <= 1)
	{
		error = "File name missing.\n";
		write(2, error, ft_strlen(error));
		return (1);
	}
	if (argc >= 3)
	{
		error = "Too many arguments.\n";
		write(2, error, ft_strlen(error));
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		fd;
	int		bytes;
	int		error;
	char	buf[15];

	error = check_error(argc);
	if (error)
		return (1);
	fd = open(argv[1], 0);
	bytes = read(fd, buf, 15);
	while (bytes != 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, 15);
	}
	close(fd);
	return (0);
}
