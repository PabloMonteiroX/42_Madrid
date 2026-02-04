/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 09:57:52 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/04 09:58:13 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;
	int	i;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	size = 6;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	return (0);
}*/
