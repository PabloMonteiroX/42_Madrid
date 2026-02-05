/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pmonteir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:51:40 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/05 16:11:47 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    ft_putnbr(nb / 10);
    c = (nb %  10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    ft_putnbr(0);
    write(1, "\n", 1);

    ft_putnbr(42);
    write(1, "\n", 1);

    ft_putnbr(-42);
    write(1, "\n", 1);

    ft_putnbr(2147483647);
    write(1, "\n", 1);

    return (0);
}
