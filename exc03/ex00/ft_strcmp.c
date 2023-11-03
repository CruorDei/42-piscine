/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:22:32 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/28 16:10:10 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG
# include <stdio.h>
#endif

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		diff;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
		return (diff);
	}
	else
		return (0);
}

#ifdef DEBUG

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "ghfgldgasda";
	str2 = "ghfgldgasdah";
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}
#endif
