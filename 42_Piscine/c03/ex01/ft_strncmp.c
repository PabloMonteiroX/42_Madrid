/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmonteir <pmonteir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:11:47 by pmonteir          #+#    #+#             */
/*   Updated: 2026/02/12 01:49:28 by pmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("1: %d\n", ft_strncmp("hola", "hola", 4));
	printf("2: %d\n", ft_strncmp("abc", "abd", 3));
	printf("3: %d\n", ft_strncmp("abd", "abc", 3));
	printf("4: %d\n", ft_strncmp("abc", "ab", 3));
	printf("5: %d\n", ft_strncmp("ab", "abc", 3));
	printf("6: %d\n", ft_strncmp("abcde", "abxyz", 2));
	printf("7: %d\n", ft_strncmp("abcde", "abxyz", 3));
	return (0);
}