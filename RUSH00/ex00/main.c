/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addel-gr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:39:49 by addel-gr          #+#    #+#             */
/*   Updated: 2023/09/18 15:49:11 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc > 2)
		rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
