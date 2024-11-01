/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:00:25 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/17 15:36:39 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	k;
	float	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		k = i * i;
		if (k == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(1906457569));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(9801));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d", ft_sqrt(-2147483648));
	printf("11, 5, 99, 0, 1, 0, 0");
}*/
