/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addel-gr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:40:11 by addel-gr          #+#    #+#             */
/*   Updated: 2023/09/18 17:19:44 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	lo;
	int	la;

	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	lo = 0;
	while (lo < y)
	{
		la = 0;
		while (la < x)
		{
			if ((lo == 0 && la == 0) || (lo == y - 1 && la == 0))
				ft_putchar('o');
			else if ((lo == 0 && la == x - 1) || (lo == y - 1 && la == x - 1))
				ft_putchar('o');
			else if (la == 0 || la == x - 1)
				ft_putchar('|');
			else if (lo == 0 || lo == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			la++;
		}
		lo++;
		ft_putchar('\n');
	}
}
