/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pmonteir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:04:01 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/15 20:50:44 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_len;

	if (!ft_check_base(base))
		return (0);
	base_len = ft_base_len(base);
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_parse_number(str, base, base_len, i) * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-42", "0123456789"));
	printf("%d\n", ft_atoi_base("   +7", "01234567"));
	printf("%d\n", ft_atoi_base("abc", "0123456789"));
	return (0);
}
