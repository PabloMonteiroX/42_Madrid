/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pmonteir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:42:14 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/03 16:42:36 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d", a, b);
}*/
