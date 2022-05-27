/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:14:20 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/05/17 22:08:08 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = i * i;
	if (nb < 0)
		return (0);
	while (res <= nb)
	{
		res = i * i;
		if (res < 0)
			return (0);
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
