/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:21:36 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/21 17:14:39 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG
# include <stdio.h>
#endif

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
/*
#ifdef DEBUG

void	putarr(int arr[], int size)
{
	int		i;

	i = -1;
	while (++i < (size -1))
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main (void)
{
	int	size;
	int	tab[] = {10, 7, 8, 9, 1, 5};	
	size = 6;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}
#endif*/
