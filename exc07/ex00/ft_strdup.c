/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:43:04 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/29 22:59:36 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	i = -1;
	if (!dest)
		return (0);
	else
		while (i++, src[i])
			dest[i] = src[i];
		dest[i] = '\0';
		return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_strdup("dsdsdsffsfas"));
	return (0);
}*/
