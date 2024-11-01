/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:17:23 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/17 10:39:21 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "reloaded is aweeeeeeeeeeeeeeeeeeesome";
	ft_putstr(str);
	return (0);
}*/
