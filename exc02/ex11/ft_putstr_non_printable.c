/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <bdenoue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:29:22 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/21 11:16:06 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0)
		c += 256;
	if (c >= 16)
	{
		ft_conv_hexa(c / 16);
		ft_conv_hexa(c % 16);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			tmp = str[i];
			ft_conv_hexa(tmp);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

#ifdef DEBUG

int	main(void)
{
	char	*str;

	str = "Bonjo\rur";
	ft_putstr_non_printable(str);
}

#endif
