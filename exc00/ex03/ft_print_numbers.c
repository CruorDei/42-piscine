/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:21 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/13 16:51:38 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		c;
	char	ch;

	c = 0;
	while (c < 10)
	{
		ch = c + '0';
		write(1, &ch, 1);
		c++;
	}
}

#ifdef DEBUG

int	main(void)
{
	ft_print_numbers();
	return (0);
}

#endif
