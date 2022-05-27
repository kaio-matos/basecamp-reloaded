/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:14:20 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/05/23 17:06:20 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*allocated;
	int	i;
	int	size;

	i = 0;
	size = max;
	if (min >= max)
		return (allocated = 0);
	if (min < 0 && max < 0)
	{
		size = (min * -1) + (max * -1);
	}
	else if (min < 0)
	{
		size = (min * -1) + max;
	}
	allocated = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		allocated[i] = i + min;
		i++;
	}
	return (allocated);
}
