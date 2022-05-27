/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:14:20 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/05/20 16:24:16 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ascii_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	int		is_finished;
	char	*temp;

	i = 1;
	j = i + 1;
	is_finished = 0;
	while (i <= argc - 1)
	{
		if (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
				is_finished = 1;
			}
		}
		j++;
		i++;
	}
	if (is_finished)
		ascii_sort(argc, argv);
}

int	main(int argc, char *argv[])
{
	int	i;

	ascii_sort(argc, argv);
	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
