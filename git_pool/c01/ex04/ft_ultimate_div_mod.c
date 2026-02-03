/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:42:14 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/03 16:42:36 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>

int	main(void){
	int a = 12;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d", a, b);
}
*/
