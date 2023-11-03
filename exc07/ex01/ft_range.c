/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 05:06:45 by bdenoue           #+#    #+#             */
/*   Updated: 2023/10/04 10:45:05 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * (max - min + 1));
	if (!tab || min >= max)
		return (NULL);
	i = -1;
	while (++i < max - min)
		tab[i] = min + i;
	return (tab);
}
