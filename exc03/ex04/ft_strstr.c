/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:32:58 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/22 11:13:42 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = -1;
			tmp = 1;
			while (to_find[++i])
			{
				if (str[i] != to_find[i])
					tmp = 0;
			}
			if (tmp == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
