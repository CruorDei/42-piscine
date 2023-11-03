/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:19:19 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/27 09:54:09 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#ifdef DEBUG
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello bande de bg";
	char dest[17];

	printf("%s\n", ft_strncpy(dest, src, 11 ));
}
#endif*/
