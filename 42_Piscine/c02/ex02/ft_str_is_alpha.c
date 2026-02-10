

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')	
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("\"Hola\"      -> %d\n", ft_str_is_alpha("Hola"));
	printf("\"HOLA\"      -> %d\n", ft_str_is_alpha("HOLA"));
	printf("\"hola42\"    -> %d\n", ft_str_is_alpha("hola42"));
	printf("\"hola!\"     -> %d\n", ft_str_is_alpha("hola!"));
	printf("\"\"          -> %d\n", ft_str_is_alpha(""));
	return (0);
}

