

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}


int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("\"12345\"   -> %d\n", ft_str_is_numeric("12345"));
	printf("\"00123\"   -> %d\n", ft_str_is_numeric("00123"));
	printf("\"12a45\"   -> %d\n", ft_str_is_numeric("12a45"));
	printf("\"12 45\"   -> %d\n", ft_str_is_numeric("12 45"));
	printf("\"\"        -> %d\n", ft_str_is_numeric(""));
	return (0);
}
