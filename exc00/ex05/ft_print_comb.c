/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:46:23 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/14 13:32:07 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c);
void	ft_print_comb(void);

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				if (c != d && d != u && u != c)
				{
					ft_putchar(c, d, u);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}

#ifdef DEBUG

int	main(void)
{
	ft_print_comb();
	return (0);
}
#endif
