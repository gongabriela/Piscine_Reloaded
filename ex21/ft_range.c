/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:58:05 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/18 12:33:32 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (max <= min)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	int	*array = ft_range(0, 9);
	int i = 0;
	while (i < 9)
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
