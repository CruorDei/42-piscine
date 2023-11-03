/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:35:11 by bdenoue           #+#    #+#             */
/*   Updated: 2023/10/03 15:07:48 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 0;
	while (++i <= 46641)
		if (nb % ((i * 2) + 1) == 0 || nb % 2 == 0)
			return (0);
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d", ft_is_prime(atoi(*ac[1])));
}*/
