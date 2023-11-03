/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:51:14 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/13 18:31:41 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n >= 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}

#ifdef DEBUG

int	main(void)
{
	ft_is_negative(5);
	return (0);
}

#endif
