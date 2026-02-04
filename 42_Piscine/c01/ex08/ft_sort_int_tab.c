/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:18:46 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/04 10:19:01 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;
	int	i;

	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 7;
	tab[3] = 5;
	tab[4] = 3;
	tab[5] = 6;
	size = 6;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	return (0);
}*/
