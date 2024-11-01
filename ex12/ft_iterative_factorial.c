/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:46 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/17 10:31:06 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (13 <= nb || nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	while (1 <= i)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-13));
}*/
