/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:45:03 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/27 10:14:28 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG
# include <stdio.h>
#endif

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
						str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#ifdef DEBUG

int	main(void)
{
	char	a[] = "teS p4s tRop tr3s gentil+meChan7quo! ?non";

	printf("%s\n", ft_strcapitalize(a));
	return (0);
}
#endif*/
