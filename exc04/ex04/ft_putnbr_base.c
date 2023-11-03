/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:12:02 by bdenoue           #+#    #+#             */
/*   Updated: 2023/10/02 17:15:05 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_is_correct(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2 || base == NULL)
		return (0);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] > 126 || base[i] < 33)
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_base_is_correct(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr == 0)
		ft_putchar(&base[0]);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr / ft_strlen(base) != 0)
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	ft_putchar(&base[nbr % ft_strlen(base)]);
}

#ifdef DEBUG

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return (0);
}
#endif
