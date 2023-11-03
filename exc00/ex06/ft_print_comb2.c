/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:35:36 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/14 16:03:18 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_char(char a);

void	ft_print_char(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = 1 + i;
		while (j < 100)
		{
			ft_print_char(i / 10 + '0');
			ft_print_char(i % 10 + '0');
			write(1, " ", 1);
			ft_print_char(j / 10 + '0');
			ft_print_char(j % 10 + '0');
			if (j != 99 || i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

#ifdef DEBUG

int	main(void)
{
	ft_print_comb2();
	return (0);
}

#endif
