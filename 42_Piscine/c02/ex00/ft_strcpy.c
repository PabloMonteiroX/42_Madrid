

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "Hola 42";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("src  : %s\n", src);
	printf("dest : %s\n", dest);
	return (0);
}
