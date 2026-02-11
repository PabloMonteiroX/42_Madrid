/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:45:13 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/11 14:22:45 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("1: %d\n", ft_strcmp("hola", "hola"));
	printf("2: %d\n", ft_strcmp("abc", "abd"));
	printf("3: %d\n", ft_strcmp("abd", "abc"));
	printf("4: %d\n", ft_strcmp("abc", "ab"));
	printf("5: %d\n", ft_strcmp("ab", "abc"));
	return (0);
}
