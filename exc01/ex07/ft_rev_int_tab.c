/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenoue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:11:37 by bdenoue           #+#    #+#             */
/*   Updated: 2023/09/25 10:34:27 by bdenoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef DEBUG
# include <stdio.h>
#endif

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	if (size < 2)
		return ;
	i = 0;
	while (i < (size/2))
	{
		ft_swap(&tab[i++], &tab[--size]);
	}
}

#ifdef DEBUG

void putarr(int arr[], int size)
{
	int	i;

	i = -1;
    	while (++i < (size -1))
        printf("%d, ", arr[i]);
    	printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	
	size = 5;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
#endif
