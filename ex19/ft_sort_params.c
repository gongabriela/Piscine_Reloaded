/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:46:54 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/10/17 14:59:37 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;
	int	b;
	int	j;
	char	m;

	i = 1;
	m = 0;
	while (i != argc)
	{
		a = 1;
		b = 2;
		j = 0;
		while (argv[a][j])
		{
			if (argv[b][j] == m)
			{
				ft_putchar(argv[b][j]);
				ft_putchar('\n');
			}
			else if ((argv[a][j] > argv[b][j] && argv[b][j] <= m) || (argv[a][j] < argv[b][j] && i < argc))
				b++;
			else
			{
				ft_putchar(argv[a][j]);
				ft_putchar('\n');
				m = argv[a][j];
			}
		}
		i++;
	}
}
