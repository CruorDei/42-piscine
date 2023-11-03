/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:24:06 by bdenoue           #+#    #+#             */
/*   Updated: 2023/10/03 15:01:51 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 0)
	{
		while (++i <= 46340)
		{
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac > 0)
		;
	printf("%d\n", ft_sqrt(atoi(av[1])));
	return (0);
}*/
