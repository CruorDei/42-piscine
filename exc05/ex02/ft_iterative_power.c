/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:54:35 by bdenoue           #+#    #+#             */
/*   Updated: 2023/10/03 09:56:28 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	if (power < 1)
		return (!power);
	nbr = nb;
	while (--power)
		nbr *= nb;
	return (nbr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac,char **av)
{
	printf("%d",ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
