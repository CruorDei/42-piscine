/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:05:43 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/27 18:13:02 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	ac = 0;
	i = 0;
	while (av[0][i])
	{
		write(1, &av[0][i], 1);
		i++;
	}
	return (0);
}