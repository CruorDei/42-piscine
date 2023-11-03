/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addel-gr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:40:11 by addel-gr          #+#    #+#             */
/*   Updated: 2023/09/17 12:55:55 by addel-gr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	lo;
	int	la;

	lo = 0;
	while (lo < y)
	{
		la = 0;
		while (la < x)
		{
			if ((lo == 0 && la == x - 1) || (lo == 0 && la == 0))
				ft_putchar('A');
			else if ((lo == y - 1 && la == 0) || (lo == y - 1 && la == x - 1))
				ft_putchar('C');
			else if (la == 0 || la == x - 1 || lo == 0 || lo == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			la++;
		}
		lo++;
		ft_putchar('\n');
	}
}
