/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:36:07 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/28 10:32:37 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(&str[i]);
	ft_putchar("\n");
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (++i <= ac)
	{
		j = 1;
		while (++j <= ac - 1)
		{
			if (ft_strcmp(av[j], av[j - 1]) < 0)
			{
				tmp = av[j];
				av[j] = av[j - 1];
				av[j - 1] = tmp;
			}
		}
	}
	i = 0;
	while (av[++i])
		ft_putstr(av[i]);
}
