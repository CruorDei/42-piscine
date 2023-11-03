/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:49:55 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/27 09:52:05 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#ifdef DEBUG

#include <stdio.h>

int main(void)
{
	char dest[29];
	
	ft_strcpy(dest, "helloooo toi, fonctionne tu ?");
	printf("%s", dest);	
}

#endif*/
