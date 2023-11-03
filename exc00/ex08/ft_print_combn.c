/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:31:18 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/20 12:20:34 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int	number[n];
	int	i;

	i = -1;
	while (++i < n)
	{
		number[i] = i++
	}
}

#ifdef DEBUG

int	main(void)
{
	ft_print_combn(5);
	return (0);
}

#endif
