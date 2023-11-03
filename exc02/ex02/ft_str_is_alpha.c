/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:06 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/27 09:55:06 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG
# include <stdio.h>
#endif

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#ifdef DEBUG

int	main(void)
{
	int		is_alpha;
	char	a[20];

	a[20] = "avoue t'aime le cafe";
	is_alpha = ft_str_is_alpha(a);
	printf("%d\n", is_alpha);
}
#endif
